#include "monty.h"
/*
 * handle_error - handles long errors
 * @id: Line number
 * @str: command
 */
void handle_error(int id, char *str)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", id, str);
	free(str);
	exit(EXIT_FAILURE);
}
