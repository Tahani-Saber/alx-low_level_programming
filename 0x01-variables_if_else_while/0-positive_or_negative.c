#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - start of the program
 *
 * Description: A c program to determine the number is positive or negative
 *
 * Return: must be 0
*/
int main(void)
{
int n;
rand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive", n);
}
else if (n < 0)
{
printf("%d is negative", n);
}
else
{
printf("%d is zero", n);
}
return (0);
}
