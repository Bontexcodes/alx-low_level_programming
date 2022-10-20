#include "main.h"
/**
  * _islower - prints the alphabet in lowercase
  * @c: - number or alphabet
  * Return: 0 succesful or 1 if otherwise
  *
  */

int _islower(int c)
{
	if ((c >= 'a') &&(c <= 'z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
