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
