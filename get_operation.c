#include "monty.h"
/**
 * get_operation - returns a pointer to a function correspoing to an opcode
 * @str: the opcode
 *
 * Return: pointer to function
 */
void (*get_op(char *str, int *id))(stack_t **stack, unsigned int line_number)
{
	instruction_t funct[] = {
		{"push", push},
		{"pall", pall},
	};
	int i;

	i = 0;
	while (funct[i].opcode)
	{
		if (compare(funct[i].opcode, str) == 0)
		{
			*id = 5 - strlen(funct[i].opcode);
			return (funct[i].f);
		}
		i++;
	}
	return (NULL);
}
