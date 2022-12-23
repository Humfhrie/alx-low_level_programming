#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: A pointer to the concatenated uponi.
 * @src: the source to the appended to @dest
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
