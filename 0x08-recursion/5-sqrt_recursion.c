#include "main.h"

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: the number whose square root is calculated
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
