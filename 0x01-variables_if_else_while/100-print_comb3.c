#include <stdio.h>

/**
 * main - Print all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i1;
	int i2;

	for (i1 = 0; i1 <= 9; i1++)
	{
		for (i2 = i1 + 1; i2 <= 9; i2++)
		{
			putchar(i1 + '0');
			putchar(i2 + '0');

			if (i1 != 8 || i2 != 9)
				putchar(',');
				putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
