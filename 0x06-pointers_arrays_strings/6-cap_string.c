#include "main.h"
/**
* cap_string-capitalizes strings
* @c:pointer to string
* Return:returns string
*/
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == ' ' || c[i] == '\n' || c[i] == '\t' || c[i] == '.' || c[i] == ',' || c[i] == ';' || c[i] == '!' || c[i] == '?' || c[i] == '(' || c[i] == ')' || c[i] == '{' || c[i] == '}' || c[i] == '"')
		{
			if (c[i + 1] > 96 && c[i + 1] < 123)
				c[i + 1] = c[i + 1] - 32;
		}
	}
	return (c);
}
