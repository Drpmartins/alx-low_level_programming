#include <stdio.h>

/**
 *main-program that prints numbers from 0 to 9
 *Return:0 no error, non zero if error
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
