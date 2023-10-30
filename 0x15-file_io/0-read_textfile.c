#include "main.h"

/**
 * read_textfile - reading the file
 * @filename: the file name
 * @letters: letters will read
 *
 * Retrun: 0 if success otherwise -1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, count;
char *str;

if (!filename || !letters)
{
return (0);
}

str = malloc(sizeof(char) * letters);
fd = open(filename, O_RDONLY);

if (!str || fd < 0)
{
return (0);
}

count = write(STDOUT_FILENO, str, read(fd, str, letters));
if (count < 0)
return (0);

free(str);
close(fd);
return (count);
}
