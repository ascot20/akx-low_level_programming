#include "main.h"

/**
 * find_square - a function to find the square of a number
 *
 * @number: the number whose square is to be found
 * @square_root: the sqaure root
 *
 * Return: the sqaure of number
 */
int find_square(int number, int square_root)
{
if (square_root * square_root == number)
return (square_root);

else if (square_root * square_root < number)
return (find_square(number, square_root + 1));

else
return (-1);

}

/**
 * _sqrt_recursion -  returns the natural square
 * root of a number
 *
 * @n: the number whose sqaure root is to be found
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
return (find_square(n, 1));
}
