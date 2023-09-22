#include <string.h>
#include <stdio.h>
/**
 * compare - compares two string
 * @str1: first string
 * @str2: second string
 *
 * Return: 0 if same
 */
int compare(char *str1, char *str2)
{
	size_t i;

	for (i = 0; i < strlen(str1); i++)
	{
		if (str1[i] != str2[i])
			return (1);
	}
	return (0);
}
