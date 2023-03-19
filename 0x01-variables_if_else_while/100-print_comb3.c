#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
		if (i < j)
		{	
		putchar(48 + i);
		putchar(48 + j);
			if (i == 8 && j ==9)
			continue;
			else
			{
			putchar(',');
			putchar(' ');
			}
		}
		}
	}
	putchar('\n');
	return (0);
}
