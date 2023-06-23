#include "alxMonty.h"

/**
 * pallFunc - To prints all the values on the stack
 * @stack: pointer to the top of the stack
 * @lineNum: Line number of code from file read
 */
void pallFunc(stack_ **stack, unsigned int lineNum)
{
	stack_ *temp = *stack;

	(void) lineNum;
	if (!stack || !(*stack))
	{
		return;
	}

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
