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
			printf("%d%d", i1, i2);

			if (i1 != 9 || i2 != 8)
				putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

