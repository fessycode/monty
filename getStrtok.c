#include "alxMonty.h"

/**
 * getStrtok - tokenizes a line
 * @line: line to be tokenised
 * @lineNum: line number of the line to be tokenised
 * Return: token
 */
char *getStrtok(char *line, unsigned int lineNum)
{
	char *delim = " ";
	char *token = NULL;
	char *arg = NULL;

	line = strtok(line, "\n"); /*removes newline*/
	token = strtok(line, delim);

	if (!token) /*ignore empty lines*/
		return (NULL);

	if (token[0] == '#') /*ignore comments*/
		return (NULL);

	arg = strtok(NULL, delim);
	if (arg && (checkIfInteger(arg) == 1))/*if arguement !empty/!int*/
	{
		globalVar = atoi(arg);
	}
	else if (arg == NULL && (strcmp(token, "push") == 0))
	{
		fprintf(stderr, "L%u: usage: push integer\n", lineNum);
		exit(EXIT_FAILURE);
	}
	return (token);
}
