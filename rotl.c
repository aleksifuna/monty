#include "monty.h"
/**
 * rotl - changes the position of top and second top elements
 * @stack: head node of the stack
 * @line_number: command line number
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *current;

	if (*stack == NULL || (*stack)->next == NULL)
		return;
	top = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	top->next = NULL;
	current = *stack;
	while (current->next != NULL)
		current = current->next;
	current->next = top;
	line_number += 0;
}
