#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: the substring
 *
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, n;

	i = 0;
	while (haystack[i] != '\0')
	{
		n = i;
		j = 0;
		while (haystack[i] == needle[j] &&
				needle[j] != '\0')
		{
			j++;
			i++;
		}
		if (needle[j] == '\0')
			return (&haystack[n]);
		i++;
	}
	return (NULL);
}
