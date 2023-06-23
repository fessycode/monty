#include "alxMonty.h"

/**
 * rotlFunc -  rotates the stack to the top.
 * The top element of the stack becomes the last one,
 * and the second top element of the stack becomes the first one
 * @stack: pointer to the top of the stack
 * @lineNum: line number of code from file read
 */
void rotlFunc(stack_ **stack, unsigned int lineNum)
{
	stack_ *temp = *stack, *top = *stack;

	(void) lineNum;
	if (!stack || !(*stack) || temp->next == NULL)
	{
		return;
	}
	*stack = top->next;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = top;
	/*temp->prev->next = NULL;*/
	top->next = NULL;
}
