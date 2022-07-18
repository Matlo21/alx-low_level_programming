#include "main.h"
/**
 *_memcpy - copies memory area
 *@src: memory area to copy from
 *@dest: where to copy the area to
 *@n: number of bytes
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
