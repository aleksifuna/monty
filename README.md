# Monty Bytecode Interpreter

An interpreter for Monty 0.98, a stack-based scripting language similar to Python bytecode. This project involves implementing a bytecode interpreter to execute Monty bytecode files with `.m` extensions.

## Objectives

- Understand and apply **stack** (LIFO) and **queue** (FIFO) data structures.
- Learn common stack and queue use cases and implement them in C.
- Proper usage of global variables and memory management.

## Features

- **Execute Monty Bytecodes**: Processes commands line-by-line.
- **Stack & Queue Operations**: Supports core stack and queue functions.
- **Error Handling**: Manages invalid commands and memory issues gracefully.

## Data Structures

The main data structures are:
```c
typedef struct stack_s {
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

typedef struct instruction_s {
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
```

## Usage
- Compile
```bash
  gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```
- Run
```bash
./monty file.m
```
file.m contains Monty bytecode instructions, e.g.:
```monty
push 1
push 2
pall
```
## Requirements

- Compiled on Ubuntu 20.04 LTS using gcc.
- Code adheres to the Betty style.
- Maximum of one global variable.
- Limited to 5 functions per file.
