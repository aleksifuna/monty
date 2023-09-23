#include "monty.h"
/**
 * pchar - prints an ascii equivalent of a character
 * @stack: pointer to head node
 * @line_number: command line number
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	int num;

	current = *stack;
	if (current == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	while (current != NULL)
	{
		num = current->n;
		if (num < 126 && num > -1)
			printf("%c\n", num);
		else
		{
			fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
			exit(EXIT_FAILURE);
		}
		current = current->next;
	}
}
