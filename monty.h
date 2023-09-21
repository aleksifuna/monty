#ifndef MONTY_H
#define MONTY_H
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int globvar_value;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void pall(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void (*get_op(char *str, int *id))(stack_t **stack, unsigned int line_number);
int compare(char *str1, char *str2);
char *get_opcode(char *str, int *idx);
int get_argument(char *str, int *idx);
void run_ops(char *str, stack_t **head, int *ln_number);
int check_funct(char ch);
int char_check(char ch);
void free_list(stack_t **head);
#endif /* MONTY_H */
