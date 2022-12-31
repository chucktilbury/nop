#ifndef _ERRORS_H
#define _ERRORS_H

void error(const char* fmt, ...);
void warning(const char* fmt, ...);
void fatal(const char* fmt, ...);

void increment_errors();
int get_errors();
int get_warnings();

void set_err_stream(FILE* s);
FILE* get_err_stream();

#endif /* _ERRORS_H */
