#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: the string
 *
 * Return: integer
 */
int _strlen(char *str)
{
int i = 0
if (*str++)
i++;
return (i);
}
/**
 * create_file - create a new file
 * @filename: the name of file
 * @text_content: text should write
 *
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t count, len = strlen(text_content);

if (!filename)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd < 0)
return (-1);

if (len)
count = write(fd, text_content, len);

close(fd);
return (count == len ? 1 : -1);
}
