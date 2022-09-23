#include "main.h"
/**
* _strncpy - C functions that copies a string
* If the length of the source string is less than the maximum byte number,
* the remainder of the destination string is filled with null byte.
*@dest: buffer storing the string copy
*@src: the source string
*@n: max number of the byte copied
*Return: returns
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
