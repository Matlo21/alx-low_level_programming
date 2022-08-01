#include <stdlib.h>
#include "dog.h"
/**
 *_strdup - returns a pointer to a newly allocated space in memory,
 *which cantains a copy of the string given as a parameter
 *@src: Data to make copy of
 *Return: Pointer, NULL if insufficient memory or if @str is NULL
 */

char *_strdup(char *src)
{
char *ptr;
unsigned int i = 0;
unsigned int l = 0;

if (src == NULL)
return (NULL);

while (src[i])
i++;

ptr = malloc(sizeof(char) * (i + 1));

if (ptr == NULL)
return (NULL);

while (src[l])
{
ptr[l] = src[l];
l++;
}

ptr[l] = 0;
return (ptr);

}

/**
 *new_dog - Create a new dog variable
 *@name: Name of the dog
 *@age: Age of the dog
 *@owner: Owner of the dog
 *Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new;
char *ncpy;
char *ocpy;

new = malloc(sizeof(dog_t));

if (new == NULL)
return (NULL);

ncpy = _strdup(name);

if (!ncpy && name)
{
free(new);
return (NULL);
}

ocpy = _strdup(owner);

if (!ocpy && owner)
{
free(ncpy);
free(new);
return (NULL);
}

new->name = ncpy;
new->age = age;
new->owner = ocpy;

return (new);
}
