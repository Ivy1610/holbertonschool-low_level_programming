#ifndef FILE_IO_H
#define FILE_IO_H

#define BUFFER_SIZE 1024

#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <string.h>
#include <errno.h>


int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error_and_exit(int exit_code, const char *message);
int main(int argc, char *argv[]);

#endif
