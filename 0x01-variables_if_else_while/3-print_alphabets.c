#include <stdio.h>

/**
  *main - print upper and lowercase alphabets
  *Return: returns 0 (succesful)
  */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
