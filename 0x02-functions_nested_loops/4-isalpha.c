#include "main.h"

/**
 * _isalpha - it returns alpha
 * @c: the charcter check if it alpha
 * Return: 1 if it alpha if not 0
 */
int _isalpha(int c)
{
        return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
