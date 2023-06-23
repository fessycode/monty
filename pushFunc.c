#include "alxMonty.h"

/**
 * pushFunc - adds new data to the stack
 * @stack: pointer to the top of stack
 * @lineNum: line number
 * Return: nothing
 */
void pushFunc(stack_ **stack, unsigned int lineNum)
{
	stack_ *new;

	(void) lineNum;
	new = malloc(sizeof(stack_));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = globalVar;
	new->prev = NULL;
	if (*stack == NULL)
	{
		new->next = NULL;
		*stack = new;
	}
	else
	{
		new->next = *stack;
		*stack = new;
	}
}
