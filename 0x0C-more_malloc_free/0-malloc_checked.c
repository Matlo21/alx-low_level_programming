#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc.
 *@b: number of memory
 *Return: pointer to the allocated memory
 *exit with 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
unsigned int *i;
i = malloc(b);

if (i == NULL)
exit(98);

return (i);
}
