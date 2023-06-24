#include "alxMonty.h"

/**
 * checkIfInteger - Checks if a string contains a number
 * @arg: string to be checked
 * Return: 1 if true and 0 if false
 */
int checkIfInteger(char *arg)
{
	int n = 0;

	if (arg[n] == '-')
		n++;
	while (*(arg + n) != '\0')
	{
		if (*(arg + n) >= '0' && *(arg + n) <= '9')
			n++;
		else
			return (0);
	}
	return (1);
}
