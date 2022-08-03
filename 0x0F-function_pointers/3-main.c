#include "3-calc.h"
/**
 * main - main functiion
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 if  succsefull
 */

int main(int argc, char *argv[])
{
int a, b;
int (*func)(int, int);

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}

if (argv[2][1])
{
	printf("Error\n");
	exit(99);
}

func = get_op_func(argv[2]);

if (func == NULL)
{
	printf("Error\n");
	exit(99);
}

a = atoi(argv[1]);
b = atoi(argv[3]);

printf("%d\n", func(a, b));
return (0);
}
