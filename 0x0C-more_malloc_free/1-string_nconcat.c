#include <stdlib.h>

/**
 * _strlen - return string length
 * @s: string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i;
	
	if (s == NULL || s[0] = '\0')
		return (0);
	
	for (i = 0 ; s[i] != '\0' ; i++)
	{
	}

	if (i <= 0)
		return (0);
	else
		return (i - 1);
}



/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: the first n bytes of s2
 *
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sc;
	int s1_c, i, j;

	for (i = 0; s1 != '\0' ; i++)
	{
	}

	if (i = 0)
		i++;
	sc = malloc(sizeof(char) * (i + n));

	if (sc == NULL)
		return (NULL);

	for (j = 0; j < (i + n) ; j++)
	{
		if (s1[j] = ' ' || 