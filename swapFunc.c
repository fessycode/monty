#include "alxMonty.h"

/**
 * swapFunc - swaps the top two elements of the stack.
 * @stack: pointer to the top of the stack
 * @lineNum: line number of code from file read
 */
void swapFunc(stack_ **stack, unsigned int lineNum)
{
	stack_ *second, *first = *stack;
	int i;

	(void) lineNum;

	if (!stack || !(*stack) || first->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", lineNum);
		exit(EXIT_FAILURE);
	}

	second = first->next;

	i = first->n;
	first->n = second->n;
	second->n = i;
}
