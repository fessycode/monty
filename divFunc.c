#include "alxMonty.h"

/**
 * divFunc - To divides the second element of the stack
 * by the top element to store the result in the second stack
 * element so the stack is one element shorter.
 * @stack: pointer to the top of the stack
 * @lineNum: line number of code from file read
 */
void divFunc(stack_ **stack, unsigned int lineNum)
{
	stack_ *top, *temp = *stack;
	int i = 0;

	(void) lineNum;

	if (!stack || !(*stack) || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", lineNum);
		exit(EXIT_FAILURE);
	}

	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", lineNum);
		exit(EXIT_FAILURE);
	}

	top = temp;
	i = temp->n;
	temp = temp->next;
	temp->n = temp->n / i;
	*stack = temp;
	free(top);
}
