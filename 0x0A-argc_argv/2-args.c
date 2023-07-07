#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int arg, char const *argv[])
{
	int i = 0;

	while (arg--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
