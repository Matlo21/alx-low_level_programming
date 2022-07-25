#include "main.h"
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a new string
 *@str: the string to copy
 *Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
char *ar;
unsigned int i;
unsigned int k;

i = 0;
k = 0;

if (str == NULL)
return (NULL);

while (str[i])
i++;

ar = malloc(sizeof(char) * (i + 1));

if (ar == NULL)
return (NULL);

while (str[k])
{
ar[k] = str[k];
k++;
}

ar[k + 1] = 0;
return (ar);
}
