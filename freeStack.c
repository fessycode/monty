#include "alxMonty.h"

/**
 * freeStack - To frees a doubly linked list
 * @stack: head pointer to the list
 */
void freeStack(stack_ *stack)
{
	stack_ *temp;

	while (stack)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
	}
}
