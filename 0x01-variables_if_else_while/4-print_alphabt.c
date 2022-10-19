#include <stdio.h>

/**
  *main - prints alphabets with exceptions
  *Return: returns 0 (sucesful)
  */

int main(void)
{
	int c;


for (c = 'a'; c <= 'z'; c++)
	if ((c != 'q') && (c != 'e'))
		putchar(c);
putchar('\n');

return (0);
}

