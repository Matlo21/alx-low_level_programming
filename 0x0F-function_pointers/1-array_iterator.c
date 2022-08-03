#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: the array being passed
 * @action: is a pointer to the function you need to use
 * @size: is the size of the array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array && action)
for (i = 0; i < size; i++)
	action(array[i]);
}
