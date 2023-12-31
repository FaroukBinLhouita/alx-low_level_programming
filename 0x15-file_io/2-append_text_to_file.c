#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, out_put, len = strlen(text_content);

if (!filename)
{
return (-1);
}

fd = open(filename, O_WRONLY | O_APPEND);
out_put = write(fd, text_content, len);

if (fd == -1 || out_put == -1)
return (-1);

close(fd);
return (1);
}
