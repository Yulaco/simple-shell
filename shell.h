#ifndef _SHELL_HEADER_
#define _SHELL_HEADER_

/*Standard Libraries*/
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <sys/types.h>

/*Shell Functions*/
int main(void);
int main(int ac, char **av);
int _isatty(int fd);
size_t frase_len(const char *f);
ssize_t print_text(int fd, const void *dados, size_t count);
int puts_text(const char *s);

#endif
