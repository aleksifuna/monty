#include "monty.h"
/**
 * rotr - rotates a list
 * @stack: head node to list
 * @line_number: command line no
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *current;

	current = *stack;
	while (current != NULL)
	{
		temp = current->next;
		current->next = current->prev;
		current->prev = temp;
		if (current->prev == NULL)
			*stack = current;
		current = temp;
	}
	line_number += 0;
}
