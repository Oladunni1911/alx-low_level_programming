#include "main.h"
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: input string
 * Return: the pointer to dest.
 */

char *string_toupper(char *str)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
	        if ((*(s + count) >= 97 && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
	        count++;
	}

	return (str);
}
