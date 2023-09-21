#include "monty.h"
/**
 * get_argument - gets an integer argument
 * @str: string to get the argument from
 * @idx: index offset
 *
 * Return: integer argument
 */
int get_argument(char *str, int *idx)
{
	int reset_index;
	int len, j;
	char *arg;
	int argument;

	len = 0;
	reset_index = *idx;
	while (str[*idx] > 47 && str[*idx] < 58)
	{
		len++;
		(*idx)++;
	}
	arg = malloc(sizeof(char) * len + 1);
	*idx = reset_index;
	for (j = 0; j < len; j++)
	{
		arg[j] = str[*idx];
		(*idx)++;
	}
	arg[len] = '\0';
	argument = atoi(arg);
	free(arg);
	return (argument);
}
