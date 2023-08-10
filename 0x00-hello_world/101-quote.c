#include <unistd.h>

/**
 * main - start point of the program
 *
 * Return: always must be 1 as required
 *
 * no need to return keyword
*/

int main(void)
{
char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, quo, 59);
return (1);
}
