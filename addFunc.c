#include "alxMonty.h"

/**
 * addFunc - Adds the top two elements together
 * @stack: pointer to the top of the stack
 * @lineNum: line number of code from file read
 */
void addFunc(stack_ **stack, unsigned int lineNum)
{
	stack_ *top, *temp = *stack;
	int i = 0;

	(void) lineNum;

	if (!stack || !(*stack) || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", lineNum);
		exit(EXIT_FAILURE);
	}
	top = temp;
	i += temp->n;
	temp = temp->next;
	i += temp->n;
	temp->n = i;
	*stack = temp;
	free(top);
}
