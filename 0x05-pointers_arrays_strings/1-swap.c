#include "main.h"

/**
 * swap_int - swaping the values
 * @a: the first varabile
 * @b: the secand varabile
 * Return: void
 */
void swap_int(int *a, int *b)
{
int *temp = *a;
*a = *b;
*b = temp;
}
