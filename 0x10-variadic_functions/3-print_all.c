#include "variadic_functions.h"
/**
 *chk_char - prints out char
 *@list: the type
 *Return: void
 */

void chk_char(va_list list)
{
printf("%c", va_arg(list, int));
}

/**
 * chk_int - prints out the int
 * @list: the type
 * Return: void
 */

void chk_int(va_list list)
{
printf("%i", va_arg(list, int));
}

/**
 * chk_float  - prints out the float
 * @list: the type
 * Return: void
 */

void chk_float(va_list list)
{
printf("%f", va_arg(list, double));
}

/**
 * chk_string - prints out the string
 * @list: the type
 * Return: void
 */

void chk_string(va_list list)
{
char *str;

str = va_arg(list, char *);

if (str == NULL)
	str = "(nil)";

printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
check_t types[] = {
	{"c", chk_char},
	{"i", chk_int},
	{"f", chk_float},
	{"s", chk_string},
	{NULL, NULL}
};
int i = 0, j = 0;
va_list list;
char *stp = "";

va_start(list, format);

while (format && format[i])
{
while (types[j].chk)
{
if (format[i] == *types[j].chk)
{
	printf("%s", stp);
	types[j].f(list);
	stp = ", ";
}

j++;
}

j = 0;
i++;
}

printf("\n");
va_end(list);
}
