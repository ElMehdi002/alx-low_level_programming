#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description:  Print all the letters except q and e
 * Return: 0
 */
int main()
{
    char c = 'a';
    while ( c<='z'){
        if (c != 'e' && c != 'q' ){
            putchar(c);
        }
        c++;
        }
    putchar('\n');

    return 0;
}
