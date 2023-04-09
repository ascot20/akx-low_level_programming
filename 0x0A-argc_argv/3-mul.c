#include <stdio.h>
#include "main.h"
/**
* main-entry point
* @argc:argument counter
* @argv:argument vector
*
* Return:return 0
*/
int main(int argc, char *argv[])
{
	int a;
	int b;
	
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
