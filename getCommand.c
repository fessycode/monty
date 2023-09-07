#include "alxMonty.h"

/**
 * getCommand - To matches a token to a command
 * @token: token to be matched
 * @head: The pointer to the top of the stack
 * @lineNum: lune number
 */
void getCommand(char *token, stack_ **head, unsigned int lineNum)
{
	instruction_t cmd[] = {
		{"push", pushFunc},
		{"pall", pallFunc},
		{"pint", pintFunc},
		{"pop", popFunc},
		{"swap", swapFunc},
		{"add", addFunc},
		{"nop", nopFunc},
		{"sub", subFunc},
		{"div", divFunc},
		{"mul", mulFunc},
		{"mod", modFunc},
		{"pchar", pcharFunc},
		{"pstr", pstrFunc},
		{"rotl", rotlFunc},
		{"rotr", rotrFunc},
		{"stack", changeModeFunc},
		{"queue", changeModeFunc},
		{NULL, NULL}
	};
	int index = 0;

	while (cmd[index].opcode != NULL)
	{
		if (strcmp(token, cmd[index].opcode) == 0)
		{
			cmd[index].f(head, lineNum);
			return;
		}
		index++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", lineNum, token);
	exit(EXIT_FAILURE);
}
