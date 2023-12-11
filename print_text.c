#include "shell.h"

/**
 * print_text - Writes to count bytes from temporary placeholder
 * to file descriptor.
 * @fd: Number which identifies opened file in system.
 * @dados: Pointer to temporary storage location.
 * @count: Number of bytes.
 *
 * Return: On success number of bytes, -1 error.
 */
ssize_t print_text(int fd, const void *dados, size_t count)
{
	return (write(STDOUT_FILENO, dados, frase_len(count)));
}

/**
 * puts_text - Writes string to stdout.
 * @s: Pointer to string.
 *
 * Return: On success non-negative value, else on error cast to EOF.
 */
int puts_text(const char *s)
{
	int words = 0;

	do {
		write(1, &s[i], 1);
		words++;
	} while (s[words] != '\0');

	return (0);
}
