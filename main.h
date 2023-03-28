#ifndef _main_h
#define _main_h
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>
int _printf(const char* format, ...);
char *_concat(char*, char*);
int bufLen(const char*);
#endif
