#include "monty.h"
/**
 * main - main (entry point) for the interpreter
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	char line[1024];
	stack_t *head;
	int line_number;
	FILE *file;

	line_number = 0;
	head = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, sizeof(line), file) != NULL)
	{
		line_number++;
		if (is_blank(line))
			continue;
		if (line[0] == '#')
			continue;
		run_ops(line, &head, &line_number);
	}
	fclose(file);
	free_list(&head);
	return (0);
}
