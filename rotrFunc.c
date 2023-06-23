#include "alxMonty.h"

/**
 * rotrFunc - rotates the stack to the bottom.
 * The last element of the stack becomes the top element of the stack
 * @stack: pointer to the head
 * @lineNum: line number where the opcode was read from file
 */
void rotrFunc(stack_ **stack, unsigned int lineNum)
{
	stack_ *temp = *stack;
	stack_ *top = *stack;

	(void) lineNum;
	if (!stack || !(*stack) || temp->next == NULL)
	{
		return;
	}
	*stack = temp->next;
	while (temp->next->next != NULL)
	{
		*stack = (*stack)->next;
		temp = temp->next;
	}
	(*stack)->next = top;
	(*stack)->prev = NULL;
	temp->next = NULL;
}
