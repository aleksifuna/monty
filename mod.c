#include "monty.h"
/**
 * mod - adds the top two elements of the stack
 * @stack: head node of stack
 * @line_number: command line number
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
		op_error(line_number, "mod");
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	temp->n %= (*stack)->n;
	temp->prev = NULL;
	free(*stack);
	*stack = temp;
}
