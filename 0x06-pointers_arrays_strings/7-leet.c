#include "main.h"

/**
 * leet - transform to leet
 * @s: char array string type
 * Return: s transformed
 */

char *leet(char *s)
{
	int i, j;
	char low[] = "aeotl";
	char upp[] = "AEOTL";
	char leet[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == low[j] || s[i] == upp[j])
			{
				s[i] = leet[j];
				break;
			}
		}
	}
	return (s);
}
