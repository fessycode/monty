#include "alxMonty.h"

/**
 * pintFunc - Prints the top value of the stack
 * @stack: pointer to the top of the stack
 * @lineNum: line number of code from file read
 */
void pintFunc(stack_ **stack, unsigned int lineNum)
{
	stack_ *temp = *stack;

	(void) lineNum;

	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", lineNum);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", temp->n);
}
