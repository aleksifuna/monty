#include "monty.h"
/**
 * get_op - returns a pointer to a function correspoing to an opcode
 * @str: the opcode
 *
 * Return: pointer to function
 */
void (*get_op(char *str))(stack_t **stack, unsigned int line_number)
{
	instruction_t funct[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", divide},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{NULL, NULL},
	};
	int i;

	i = 0;
	while (funct[i].opcode)
	{
		if (compare(funct[i].opcode, str) == 0)
			return (funct[i].f);
		i++;
	}
	return (NULL);
}
