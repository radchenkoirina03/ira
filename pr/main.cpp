#include <iostream>
#include <vector>
#include <memory>
#include <fstream>
#include <ostream>
#include <string>
#include <exception>
#include <stdexcept>
#include <cstdio>

using namespace std;

using Pixel = uint16_t;
using Row = vector<Pixel>;
using Image = vector<Row>;

struct Images {
    Images() = default;
    Images(uint32_t count, uint32_t n, uint32_t m);
    uint32_t magic_number;
    uint32_t count; //K
    uint32_t n; //rows
    uint32_t m; //columns
    vector<Image> images;
};

Images::Images(uint32_t count_, uint32_t n_, uint32_t m_)
    : count(count_), n(n_), m(m_)
{
    images = vector<Image>(count, Image(n, Row(m, 0)));
}

istream& operator>>(istream& imagesFile, Images& images)
{
    imagesFile >> images.magic_number >> images.count >> images.n >> images.m;
    Pixel pixel;
    for (size_t k = 0; k < images.count; k++) {
        Image image;
        for (size_t i = 0; i < images.n; i++) {
            Row row;
            for (size_t j = 0; j < images.m; ++j) {
                if (imagesFile.eof())
                    throw logic_error("Wrong format, reached eof too early");
                else
                    imagesFile >> pixel;
                if (pixel > 255)
                    throw logic_error("Value should be between 0 and 255");
                row.push_back(pixel);
            }
            image.push_back(move(row));
        }
        images.images.push_back(move(image));
    }
    return imagesFile;
};

ostream& operator<<(ostream& ost, Image& image)
{
    for (size_t i = 0; i < image.size(); ++i) {
        for (size_t j = 0; j < image.at(0).size(); ++j) {
            ost << image[i][j] << " ";
        }
        ost << "\n";
    }
    return ost;
};

ostream& operator<<(ostream& imagesFile, Images& images)
{
    imagesFile << images.magic_number << " " << images.count << " " << images.n << " " << images.m << "\n";
    for (size_t k = 0; k < images.count; k++) {
        imagesFile << images.images[k] << "\n";
    }
    return imagesFile;
};

class ImageRedactor
{
public:
    void read(const string& name);
    void write(const string& name);
    void create(uint32_t k, uint32_t n, uint32_t m);
    void rename(string& new_name);
    void printImage(size_t k);
    void changeMagicNumber(uint32_t);
    void changeSize(uint32_t new_n, uint32_t new_m);
    void changeCount(uint32_t new_k);
    void convertToImage(const string& name, int k);
    
private:
    string file_name;
    Images images;
    uint32_t magic_number = 2051;
};

void ImageRedactor::read(const string& name)
{
    ifstream fin(name);
    if (!fin)
        throw logic_error("Couldn't open file");
    file_name = name;
    fin >> images;
    fin.close();
    if (magic_number != images.magic_number)
        throw logic_error("Wrong magic_number");
}

void ImageRedactor::write(const string& name)
{
    file_name = name;
    ofstream fout(name);
    fout << images;
    fout.close();
}

void ImageRedactor::create(uint32_t k, uint32_t n, uint32_t m)
{
    images = Images(k, n , m);
    images.magic_number = magic_number;
}

void ImageRedactor::rename(string& new_name)
{
    //rename(file_name.c_str(), new_name.c_srt());
}

void ImageRedactor::printImage(size_t k)
{
    if (k >= images.count)
        throw logic_error("k > count");
    cout << images.images[k];
}

void ImageRedactor::changeMagicNumber(uint32_t new_number)
{
    magic_number = images.magic_number = new_number;
}

void ImageRedactor::changeSize(uint32_t new_n, uint32_t new_m)
{
    for (auto k = 0; k < images.count; ++k) {
        images.images[k].resize(new_n, Row(new_m, 0));
        for (auto i = 0; i < new_n; ++i)
        images.images[k][i].resize(new_m, 0);
    }
    images.n = new_n;
    images.m = new_m;
}

void ImageRedactor::changeCount(uint32_t new_k)
{
    images.count = new_k;
    images.images.resize(new_k, Image(images.n, Row(images.m, 0)));
}

void ImageRedactor::convertToImage(const string& name, int k)
{
    if (k >= images.count)
        throw logic_error("k > count");
    string pgm_name = name + ".pgm";
    ofstream ost(pgm_name);
    ost << "P2" << "\n" << images.m << " " << images.n << "\n" << 255 << "\n" << images.images[k];
    ost.close();
}

void menuLoop()
{
    ImageRedactor redactor;
    while(true)
    {
        cout << """Choose operation:\n\
        1 - Read\n\
        2 - Write\n\
        3 - Create\n\
        4 - Rename\n\
        5 - PrintImage\n\
        6 - ChangeMagicNumber\n\
        7 - ChangeSize\n\
        8 - ChangeCount\n\
        9 - ConvertToImage\n\
        0 - Exit\n\
        -----------------\n\
        """;
        int command, n, m, k;
        string name;
        cin >> command;
        switch(command) {
            case 1:
                cin >> name;
                redactor.read(name);
                break;
            case 2:
                cin >> name;
                redactor.write(name);
                break;
            case 3:
                cin >> k >> n >> m;
                redactor.create(k, n, m);
                break;
            case 4:
                cin >> name;
                redactor.rename(name);
                break;
            case 5:
                cin >> k;
                redactor.printImage(k);
                break;
            case 6:
                cin >> k;
                redactor.changeMagicNumber(k);
                break;
            case 7:
                cin >> n >> m;
                redactor.changeSize(n, m);
                break;
            case 8:
                cin >> k;
                redactor.changeCount(k);
                break;
            case 9:
                cin >> name >> k;
                redactor.convertToImage(name, k);
                break;
            case 0:
                return;
            default:
                cout << "Wrong operation number\n";
        }
    }
}

int main()
{
    try {
        menuLoop();
    } catch(logic_error& err) {
        cout << "Exception catched: " << err.what() << "\n";
    }

    return 0;
}
