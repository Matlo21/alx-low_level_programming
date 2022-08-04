#include "variadic_functions.h"
/**
 *print_strings - prints strings, followed by a new line.
 *@separator: string to be printed between strings
 *@n: number of strings passed to the function
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *o;

va_start(ap, n);

for (i = 0; i < n; i++)
{
o = (va_arg(ap, char *));

if (o != NULL)
printf("%s", o);

else
printf("(nil");

if (separator != NULL && i < n - 1)
printf("%s", separator);
}

printf("\n");
va_end(ap);
}
