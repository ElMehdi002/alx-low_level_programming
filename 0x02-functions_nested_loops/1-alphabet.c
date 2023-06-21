#include "main.h"

/**
* print_alphabet - Prints the alphabet in lowercase.
*
* Return: Always 0 (success)
*/
void print_alphabet(void)
{
	int c;
	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_puychar('\n');
}
