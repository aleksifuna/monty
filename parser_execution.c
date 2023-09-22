#include "monty.h"
/**
 * run_ops - parses a string and runs opcodes
 * @str: commands
 * @head: pointer to head node of a linked list
 * @ln_number: command line number
 */
void run_ops(char *str, stack_t **head, int *ln_number)
{
	int i, flag;
	char *opcode;
	void (*operation)(stack_t **stack, unsigned int line_number);

	i = flag = 0;
	while (str[i] != '\0')
	{
		if (char_check(str[i]) == 0 && flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", *ln_number);
			exit(EXIT_FAILURE);
		}
		else if (char_check(str[i]) == 0 && flag == 0)
		{
			opcode = get_opcode(str, &i);
			operation = get_op(opcode);
			if (operation == NULL)
				handle_error(*ln_number, opcode);
			else
			{
				if (compare("push", opcode) == 0)
					flag = 1;
				else
				{
					operation(head, *ln_number);
					return;
				}
			}
			free(opcode);
		}
		else if (isdigit(str[i]) && flag == 1)
		{
			globvar_value = get_argument(str, &i, *ln_number);
			operation(head, *ln_number);
			flag = 0;
			return;
		}
		i++;
	}
}
