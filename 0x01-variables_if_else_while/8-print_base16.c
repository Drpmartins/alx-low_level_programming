#include <stdio.h>
/**
 * main-program that prints numbers between 0 to 9
 * and letters between a to f
 * Return: 0 if no error, non zero if error.
 */
int main(void)
{
	int i;
	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}
