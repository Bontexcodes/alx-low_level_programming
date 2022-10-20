#include "main.h"

/**
  * print_alphabet - prints the alphabets in the lowercase
  *Return: returns 0 if succesful
  */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}
