#include "monty.h"
/**
 * comment - checks for comment character #
 * @str: string to check to comment character
 *
 * Return: 0 if comment else 1
 */
int comment(char *str)
{
	int flag;
	int i;

	flag = i = 0;
	while (str[i] != '\0')
	{
		if (isalpha(str[i]))
			flag = 1;
		else if (str[i] == '#' && flag == 0)
			return (0);
		i++;
	}
	return (1);
}
