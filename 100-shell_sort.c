#include <stdio.h>
#include <stdlib.h>

/**
 * print_array – Displays a number of elements in array
 * @array: container of the elements
 * @size: elements inside the number
 */
void print_array(const int *array, size_t size)
{
	size_t initial;

	initial = 0;
	while (array && initial < size)
	{
		if (initial > 0)
			printf(", ");
		printf("%d", array[initial]);
		++initial;
	}
	printf("\n");
}

