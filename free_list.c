#include "monty.h"
/**
 * free_list - frees a linked list
 * @head: pointer to head node
 */
void free_list(stack_t **head)
{
	stack_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
