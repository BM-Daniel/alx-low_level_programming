#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

int _putchar(char letter);

ssize_t read_textfile(const char *filename, size_t letters);

#endif
