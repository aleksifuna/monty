#include "monty.h"
/**
 * get_operation - returns a pointer to a function correspoing to an opcode
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
