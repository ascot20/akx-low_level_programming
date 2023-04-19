#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main-entry point
 * @argc:argument counter
 * @argv:argument vector
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int (*get_result)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	get_result = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	 if (get_result == NULL)
        {
                printf("Error\n");
	        exit(99);
	}

	printf("%d\n", get_result(a, b));
	
	return (0);
}
