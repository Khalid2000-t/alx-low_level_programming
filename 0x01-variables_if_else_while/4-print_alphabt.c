#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: always return 0
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		if (lower != 'e' && lower != 'q')
		putchar(lower);
	putchar('\n');

	return (0);
}
