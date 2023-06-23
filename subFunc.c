#include "alxMonty.h"

/**
 * subFunc - subtracts the top element from the second
 * top element to store the result in the second stack
 * element so the stack is one element shorter.
 * @stack: pointer to the top of the stack
 * @lineNum: line number of code from file read
 */
void subFunc(stack_ **stack, unsigned int lineNum)
{
	stack_ *top, *temp = *stack;
	int i = 0;

	(void) lineNum;

	if (!stack || !(*stack) || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", lineNum);
		exit(EXIT_FAILURE);
	}
	top = temp;
	i += temp->n;
	temp = temp->next;
	i = temp->n - i;
	temp->n = i;
	*stack = temp;
	free(top);
}
