#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main – The main function containing executable code
 * Return: Always 0 when successfully ran
 */
int main(void)
{
	int array_elements[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t num_elements = sizeof(array_elements) / sizeof(array_elements[0]);

	print_array(array_elements, num_elements);
	printf("\n");
	shell_sort(array_elements, num_elements);
	printf("\n");
	print_array(array_elements, num_elements);
	return (0);
}

