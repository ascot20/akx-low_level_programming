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
	int result, a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	
	get_result = get_op_func(argv[2]);

	 if (get_result == NULL)
        {
                printf("Error\n");
	        exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = get_result(a, b);

	printf("%d\n", result);
	
	return (0);
}
