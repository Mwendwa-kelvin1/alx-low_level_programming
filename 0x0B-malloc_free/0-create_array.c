#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of size 'size' and initializes each element with char 'c'
 * @size: Size of the array
 * @c: Char to initialize the array with
 *
 * Description: This function allocates memory for an array of characters with the given size
 *              and initializes each element of the array with the provided character 'c'.
 *
 * Return: Pointer to the allocated array, NULL if allocation fails or size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
