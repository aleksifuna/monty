#include "monty.h"
/**
 * nop - doesnt do anything
 * @stack: pointer to head node
 * @line_number: command line number
 */
void nop(stack_t **stack, unsigned int line_number)
{
	if (line_number > 0)
		return;
	*stack = *stack;
}
