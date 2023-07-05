#include "main.h"

/**
 * _sqrt_recursion - Find the natural square root of a number.
 * @n: The number to find the square root of.
 * Return: The square root as an integer.
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - Helper function to find the square root recursively.
 * @n: The number to find the square root of.
 * @val: The current value being checked as a possible square root.
 * Return: The square root as an integer if found, or -1 if not.
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
