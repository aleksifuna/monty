#include "monty.h"
/**
 * pstr - prints an characters given with ascii code
 * @stack: pointer to head node
 * @line_number: command line number
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	int num;

	current = *stack;
	if (current == NULL)
	{
		printf("\n");
		return;
	}
	while (current != NULL)
	{
		num = current->n;
		if (num < 126 && num > 0)
			printf("%c", num);
		else
			break;
		current = current->next;
	}
	printf("\n");
	line_number += 0;
}
