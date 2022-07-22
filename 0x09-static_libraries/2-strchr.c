#include "main.h"
/**
 *_strchr - ocates a character in a string
 *@s: is the string
 *@c: character to search
 *Return: pointer to the first occurrence of the character @c in the string @s
 */

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
{
s++;
}

else
{
return (s);
}
}

if (c == '\0')
{
return (s);
}

return (0);/*values null*/
}
