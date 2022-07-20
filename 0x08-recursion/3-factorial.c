#include "main.h"
/**
 *factorial - returns the factorial of a given number
 *@n: return value n
 *Return: factorial
 */

int factorial(int n)
{
if (n < 0)
return (-1);/*means that the function has an error*/

else if (n == 0)
return (1);

return (n * factorial(n - 1));
}
