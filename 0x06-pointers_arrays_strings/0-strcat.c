#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: char variable pointer
 * @src: char variable pointer
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int  a, b;

	for (a = 0; dest[a] != '\0'; i++)
		;
	for (b = 0; src[b] != '\0'; j++)

		dest[a + b] = src[j];

	dest[a + b] = '\0';

	return (dest);
}
