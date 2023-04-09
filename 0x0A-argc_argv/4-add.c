#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* main-entry point
* @argc:argument counter
* @argv:argument vector
*
* Return:return 0
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int j;

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
			int num = atoi(arg);

			if (num <= 0)
				continue;
			sum += num;
		
	}
	printf("%d\n", sum);
	return (0);
}
