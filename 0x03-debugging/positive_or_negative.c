#include "main.h"
/**
 * main - entry point
 * positive_or_negative - function that prints positive or negative no
 * @i: the variable to print
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);

	else if (i < 0)
		printf("%d is negative\n", i);

	else
		printf("%d is zero\n", i);
}
