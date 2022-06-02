#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - read a text file and prints it.
 * @filename:name of file.
 * @letters: characters that musth be read.
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int count2 = 0;
	char buf[102400];

	if (!filename)

