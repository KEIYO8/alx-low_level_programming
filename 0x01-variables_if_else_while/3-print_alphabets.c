#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - Entry point
 * Description: 'Check for alphabet if it is in lower case'
 * Return: always 0
 */
int main(void)

{	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	{
	return (0);
	}
}

