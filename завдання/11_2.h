//
//  files_work.h
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#ifndef files_work_h
#define files_work_h

#include <stdio.h>

extern int write_doubles_to_file(FILE* fp);

extern int read_doubles_from_file(FILE* fp);

extern int transfer_doubles_less(FILE* F, FILE* G, double a);

extern int exclude_less(FILE* F, double a);

#endif /* files_work_h */
