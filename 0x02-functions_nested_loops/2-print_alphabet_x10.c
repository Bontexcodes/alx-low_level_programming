#include "main.h"

/**
  *print_alphabet_x10 - prints all the alphabets 10 times
  *Return: 0 successful
  */

void print_alphabet_x10(void)
{
	int letter;

	int count = 0;

	while (count <= 9)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;

		}
		_putchar('\n');
		count++;

	}
}
