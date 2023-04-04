#include "main.h"
/**
 * _memset - memory
 * @s: memory address
 * @b: value
 * @n: byte to change
 * Return: new array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
