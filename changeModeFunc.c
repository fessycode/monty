#include "alxMonty.h"

/**
 * changeModeFunc - To changes mode of operation to stack or queue.
 * @stack: The begining of the doubly linked list.
 * @lineNum: The line number of the opcode being worked on.
 **/
void changeModeFunc(stack_ **stack, unsigned int lineNum)
{
	stack_ *temp = *stack;

	(void) lineNum;

	if (!stack || (*stack))
		return;
	if (temp->prev == NULL && temp->next != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
	}
	else if (temp->prev != NULL && temp->next == NULL)
	{
		while (temp->prev != NULL)
			temp = temp->prev;
	}
	*stack = temp;
}
