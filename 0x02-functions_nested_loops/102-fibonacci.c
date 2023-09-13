#include <main.h>

/**
 * main - print the sum of number that divided on 5 , 3
 * Return:0 Always
 */
int main(void)
{
int sum = 0;

for (int i = 0; i < 1024; ++i)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
prinf("%d", sum);
return (0);
}
