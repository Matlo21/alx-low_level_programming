#include "main.h"
/**
 *swap_int - swaps the values of two integers a and b
 *@a: A pointer to an int that will be updated
 *@b: A pointer to an int that will be updated
 *Return: void that means our answer is correct
 */

void swap_int(int *a, int *b)
{
int k;

k = *a;
*a = *b;
*b = k;
}
