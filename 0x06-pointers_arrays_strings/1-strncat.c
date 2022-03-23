#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * using strncat
 *
 * @dest: char variable pointer
 * @src: char variable pointer
 * @n: number of elements to oncatenate in
 * Return: pointer to resulting dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int  i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; &&n > 0; j++; n--, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
