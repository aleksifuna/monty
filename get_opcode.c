#include "monty.h"
/**
 * get_opcode - gets the opcode from a string of characters
 * @str: string of characters
 * @idx: offset index
 *
 * Return: opcode
 */
char *get_opcode(char *str, int *idx)
{
	int i, j, len;
	char *opcode;

	len = 0;
	i = *idx;
	while (check_funct(str[i]) == 0)
	{
		len++;
		i++;
	}
	opcode = malloc(sizeof(char) * len + 1);
	for (j = 0; j < len; j++)
	{
		opcode[j] = str[*idx];
		(*idx)++;
	}
	opcode[len] = '\0';
	return (opcode);
}
