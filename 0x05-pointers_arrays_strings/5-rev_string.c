#include "main.h"
/**
 * rev_string-reverses a string
 * @s: pointer to string
 */
void rev_string(char *s)
{
	int len = 0;
	
	while (s[len])
		len++;
	for (int i = 0; i < len / 2; i++)
	{
		int temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	_putchar('\n');

}
