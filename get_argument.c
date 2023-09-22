#include "monty.h"
/**
 * get_argument - gets an integer argument
 * @str: string to get the argument from
 * @idx: index offset
 * @ln_no: line no
 *
 * Return: integer argument
 */
int get_argument(char *str, int *idx, int ln_no)
{
	int reset_index;
	int len, j, mul;
	char *arg;
	int argument;

	mul = 1;
	len = 0;
	if (str[*idx - 1] == '-')
		mul = -1;
	reset_index = *idx;
	while (isdigit(str[*idx]))
	{
		len++;
		(*idx)++;
	}
	ln_no += 1;
	arg = malloc(sizeof(char) * len + 1);
	*idx = reset_index;
	for (j = 0; j < len; j++)
	{
		arg[j] = str[*idx];
		(*idx)++;
	}
	arg[len] = '\0';
	argument = atoi(arg) * mul;
	free(arg);
	return (argument);
}
