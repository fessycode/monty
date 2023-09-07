#include "alxMonty.h"

/**
 * popFunc - Pops or remover the element at the top
 * of the stack.
 * @stack: pointer to the top of the stack
 * @lineNum: line number of code from file read
 */
void popFunc(stack_ **stack, unsigned int lineNum)
{
	stack_ *temp = *stack;

	(void) lineNum;

	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", lineNum);
		exit(EXIT_FAILURE);
	}

	*stack = temp->next;
	free(temp);
}
