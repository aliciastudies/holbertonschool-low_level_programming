#ifndef FUNCTION_HEADER
#define FUNCTION_HEADER

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct type - struct type to match data type
 *
 * @f_type: the data types
 * @f: The function associated
 */

typedef struct type
{
	char *f_type;
	void (*f) (va_list args);
} type;

void print_int(va_list args);
void print_char(va_list args);
void print_str(va_list args);
void print_float(va_list args);

#endif
