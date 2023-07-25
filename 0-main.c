#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * main – main function to deal with convertion of arrays
 * Return: Always 0 when successfully ran we on top
 */
int main(void)
{
	int array_elements[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t num_elements = sizeof(array_elements) / sizeof(array_elements[0]);

	print_array(array_elements, num_elements);
	printf("\n");
	bubble_sort(array_elements, num_elements);
	printf("\n");
	print_array(array_elements, num_elements);
	return (0);
}


