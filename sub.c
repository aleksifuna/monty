#include "monty.h"
/**
 * sub - adds the top two elements of the stack
 * @stack: head node of stack
 * @line_number: command line number
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	if (*stack == NULL || (*stack)->next == NULL)
		op_error(line_number, "sub");
	temp = (*stack)->next;
	temp->n -= (*stack)->n;
	temp->prev = NULL;
	free(*stack);
	*stack = temp;
}
