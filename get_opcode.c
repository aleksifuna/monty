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
	int j;
	char *opcode;

	opcode = malloc(sizeof(char) * 5);
	for (j = 0; j < 5; j++)
	{
		opcode[j] = str[*idx];
		(*idx)++;
	}
	return (opcode);
}
