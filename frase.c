#include "shell.h"

/**
 * frase_len - Calculates length of string.
 * @f: Pointer to the string.
 *
 * Return: Length of string.
 */
int frase_len(char *f)
{
	int message = 0;

	while (f[message] != '\0')
		message++;

	return (message);
}
