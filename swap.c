#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to head node
 * @line_number: command line number
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
		op_error(line_number, "swap");
	temp = (*stack)->next;
	(*stack)->next = temp->next;
	(*stack)->prev = temp;
	temp->next = *stack;
	temp->prev = NULL;
	*stack = temp;
}
