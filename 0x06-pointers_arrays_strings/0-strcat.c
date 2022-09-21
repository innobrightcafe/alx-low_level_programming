#include "main.h"

/**
 * _strcat = this concatenates the string thats pointed to by @src
 * @dest: the is the pointer to the string thats to be concatenated on
 * @src: here is the source string to be appended to @dest.
 *
 * Return: A pointer to string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;
	while (dest[index++])
		dest_len++,

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	    
	return (dest)
}
