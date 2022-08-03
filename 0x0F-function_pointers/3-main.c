#include "3-calc.h"
/**
 * main - main functiion
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if  succsefull
 */

int main(int argc, char *argv[])
{
int a, b, c;
int (*p)(int, int);
char i;

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);

p = get_op_func(argv[2]);

if (!p)
{
printf("Error\n");
exit(99);
}

i = *argv[2];

if ((i == '/' || i == '%') && b == 0)
{
	printf("Error\n");
	exit(100);
}

c = p(a, b);

printf("%d\n", c);
return (0);
}
