#include "alxMonty.h"

/**
 * pstrFunc - print string from top of the stack
 * as a ASCII char and stops if value is 0, NULL
 * or out of range.
 * @stack: pointer to the top of the stack
 * @lineNum: line number of code from file read
 */
void pstrFunc(stack_ **stack, unsigned int lineNum)
{
	stack_ *temp = *stack;

	(void) lineNum;

	if (!stack || !(*stack))
	{
		printf("\n");
		return;
	}

	while (temp != NULL)
	{
		if (temp->n == 0 || !(temp->n >= 32 && temp->n <= 127))
		{
			putchar('\n');
			return;
		}
		putchar(temp->n);
		temp = temp->next;
	}
	putchar('\n');
}
