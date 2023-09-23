#include "monty.h"
/**
 * push - pushes an element to the stack
 * @stack: address to address of first node on stack
 * @line_number: page line number for the monty program
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "L%d: Error: malloc failed\n", line_number);
		exit(EXIT_FAILURE);
	}
	new->n = globvar_value;
	new->prev = NULL;
	if (*stack == NULL)
	{
		new->next = NULL;
	}
	else
	{
		(*stack)->prev = new;
		new->next = *stack;
	}
	*stack = new;
}
/**
 * pall - prints all the values on the stack starting from top
 * @stack: address to address of first node on stacl
 * @line_number:page line number for the monty program
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	if (*stack == NULL)
	{
		line_number += 0;
		return;
	}
	current = *stack;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
