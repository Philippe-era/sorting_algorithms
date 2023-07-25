#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main – The main function containing executable code in this manner
 * Return: Always Run variable success when it is correct
 */
int main(void)
{
	int array_elements[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	int success = 0;
       	size_t num_elements = sizeof(array_elements) / sizeof(array_elements[0]);

	print_array(array_elements, num_elements);
	printf("\n");
	quick_sort(array_elements, num_elements);
	printf("\n");
	print_array(array_elements, num_elements);
	return (success);
}

