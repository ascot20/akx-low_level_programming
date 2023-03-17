#include <stdio.h>
/**
 * main - entry point
 * Return: ALways 0
 */
int main(void)
{
	int i;
	int a;

	for (i = 0; i < 10; i++)
	putchar(48 + i);
	for (a = 'a'; a <= 'f'; a++)
	putchar(a);
	putchar('\n');
	return (0);
}
