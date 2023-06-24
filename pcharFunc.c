#include "alxMonty.h"

/**
 * pcharFunc - prints the top value of the stack
 * as a ASCII char
 * @stack: pointer to the top of the stack
 * @lineNum: line number of code from file read
 */
void pcharFunc(stack_ **stack, unsigned int lineNum)
{
	stack_ *temp = *stack;

	(void) lineNum;

	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", lineNum);
		exit(EXIT_FAILURE);
	}

	if (temp->n < 32 || temp->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", lineNum);
		exit(EXIT_FAILURE);
	}

	putchar(temp->n);
	putchar('\n');
}
