#include <stdio.h>
/**
 * main - print all numbers in base ten from 0 to 10
 *
 * Return: 0 succesful
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	putchar('\n');
	return (0);
}

