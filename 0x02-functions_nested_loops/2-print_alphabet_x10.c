#include <main.h>

/**
 * print_alphabet_x10 - prints the alower case ten times
 * Return: no return
 */
void print_alphabet_x10(void);
{
        char ch = 'a';
        int number = 10;
        int i = 0;
        const int alpha_lenght = 26;

        while (i < number)
        {
            for (int j = 0; j < alpha_lenght; ++j)
            {
                _putchar('%c');
                ch++;
            }
            _putchar('\n');
            i++;
        }
}
