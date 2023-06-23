#include "alxMonty.h"

/**
 * mulFunc - Muliplies the second top element of the
 * stack with the first element, stack is one element
 * shorter on success.
 * @stack: pointer to the top of the stack
 * @lineNum: line number of code from file read
 */
void mulFunc(stack_ **stack, unsigned int lineNum)
{
	stack_ *top, *temp = *stack;
	int i = 0;

	(void) lineNum;

	if (!stack || !(*stack) || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", lineNum);
		exit(EXIT_FAILURE);
	}
	top = temp;
	i = temp->n;
	temp = temp->next;
	temp->n = temp->n * i;
	*stack = temp;
	free(top);
}
