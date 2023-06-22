#include "main.h"
/**
 * times_table - Prints the 9 times table.
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (j != 0)
				printf(", ");

			if (result <= 9)
				printf(" ");
			
			printf("%d", result);
		}

		printf("\n");
	}
}

