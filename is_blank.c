#include "monty.h"
/**
 * is_blank - checks if a line is blank
 * @line: the line to check
 *
 * Return: return 0 if  not blank else 1
 */
int is_blank(const char *line)
{
	while (*line)
	{
		if (!isspace((unsigned char)*line))
			return (0);
		line++;
	}
	return (1);
}
