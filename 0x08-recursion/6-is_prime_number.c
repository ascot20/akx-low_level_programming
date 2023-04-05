#include "main.h"



/**
 * find_prime - function
 *
 * @n: int
 * @number: int
 *
 * Return: int
 */
int find_prime(int n, int number)
{
if ((number >= n) & (n > 1))
return (1);

else if ((n % number == 0) | (n <= 1))
return (0);

else
return (find_prime(n, number + 1));
}



/**
 * is_prime_number -  function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 *
 * @n: number whose prime is to be printed
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
return (find_prime(n, 2));
}
