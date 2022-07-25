#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @c: character to initialize the arry with
 * @size: size of the array
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *str;

str = malloc(sizeof(char) * size);

if (size == 0 || str == NULL)
	return (NULL);

i = 0;

while (i < size)
{
	str[i] = c;
	i++;
}

return (str);
}
