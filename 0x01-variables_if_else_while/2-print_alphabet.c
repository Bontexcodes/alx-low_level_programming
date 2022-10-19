#include <stdio.h>

/**
  *main - Print all the alphabet in lowercase
  *Return: 0 (successful)
  */

int main(void)

{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
