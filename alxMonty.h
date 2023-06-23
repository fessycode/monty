#ifndef _ALXMONTY_H
#define _ALXMONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <ctype.h>
#include <fcntl.h>

extern int globalVar;
int globalVar;

/**
 * struct stack_s - Doubly linked list node struct for stack,queues LIFO and FIFO
 * @n: Integer
 * @prev: The points to the previous element of the stack (or queue)
 * @next: The points to the next element of the stack (or queue)
 *
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
	struct stack_s *next;
} stack_;

/**
 * struct instruction_s - The opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_ **stack, unsigned int lineNum);
} instruction_t;

void pushFunc(stack_ **stack, unsigned int lineNum);
void pallFunc(stack_ **stack, unsigned int lineNum);
void pintFunc(stack_ **stack, unsigned int lineNum);
void popFunc(stack_ **stack, unsigned int lineNum);
void swapFunc(stack_ **stack, unsigned int lineNum);
void addFunc(stack_ **stack, unsigned int lineNum);
void nopFunc(stack_ **stack, unsigned int lineNum);
void subFunc(stack_ **stack, unsigned int lineNum);
void divFunc(stack_ **stack, unsigned int lineNum);
void mulFunc(stack_ **stack, unsigned int lineNum);
void modFunc(stack_ **stack, unsigned int lineNum);
void pcharFunc(stack_ **stack, unsigned int lineNum);
void pstrFunc(stack_ **stack, unsigned int lineNum);
void rotlFunc(stack_ **stack, unsigned int lineNum);
void rotrFunc(stack_ **stack, unsigned int lineNum);
void freeStack(stack_ *stack);
void changeModeFunc(stack_ **stack, unsigned int line_Num);

void getCommand(char *token, stack_ **head, unsigned int line_Num);
char *getStrtok(char *line, unsigned int lineNum);
int checkIfInteger(char *arg);

