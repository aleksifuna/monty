#include "monty.h"
/**
 * rotr - rotates a list
 * @stack: head node to list
 * @line_number: command line no
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	if (*stack == NULL || (*stack)->next == NULL)
		return;
	current = *stack;
	while (current->next != NULL)
		current = current->next;
	current->prev->next = NULL;
	(*stack)->prev = current;
	current->prev = NULL;
	current->next = *stack;
	*stack = current;
	line_number += 0;
}
