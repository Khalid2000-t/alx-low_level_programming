#include <stdio.h>
/**
 * main - print the numbers of base 16 in lowercase
 * Return: always return 0
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
