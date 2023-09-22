#include "monty.h"
/**
 * op_error - handles errors
 * @ln: line number
 * @msg: the operation
 */
void op_error(int ln, char *msg)
{
	fprintf(stderr, "L%d: can't %s, stack too short\n", ln, msg);
	exit(EXIT_FAILURE);
}
