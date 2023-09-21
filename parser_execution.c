#include "monty.h"
/**
 * run_ops - parses a string and runs opcodes
 * @str: commands
 * @head: pointer to head node of a linked list
 */
void run_ops(char *str, stack_t **head, int *ln_number)
{
	int i, reset_index, flag, idx_offset;
	char *opcode;
	void (*operation)(stack_t **stack, unsigned int line_number);

	i = flag = 0;
	while (str[i] != '\0')
	{
		if (char_check(str[i]) == 0 && flag == 1)
		{
			fprintf(stderr,"L%d: usage: push integer\n", *ln_number);
			exit(EXIT_FAILURE);
		}
		if (check_funct(str[i]) == 0 && flag == 0)
		{
			reset_index = i;
			opcode = get_opcode(str, &i);
			operation = get_op(opcode, &idx_offset);
			if (operation == NULL)
				i = reset_index;
			else
			{
				if (compare("push", opcode) == 0)
					flag = 1;
				else
					operation(head, *ln_number);
				i -= idx_offset;
			}
			free(opcode);
		}
		else if (str[i] > 47 && str[i] < 58 && flag == 1)
		{
			globvar_value = get_argument(str, &i);
			operation(head, *ln_number);
			flag = 0;
		}
		i++;
	}
}
