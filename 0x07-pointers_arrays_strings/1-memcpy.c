#include "main.h"
/**
 *_memcpy - function
 *@dest: stored memory
 *@src: copied memory
 *@n: bytes
 *
 *Return: memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (;a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
