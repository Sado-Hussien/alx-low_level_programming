#include "main.h"

/**
* print_alphabet - prints the alphabet in lower case followed by a new line
*
* Return: void
*/
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
