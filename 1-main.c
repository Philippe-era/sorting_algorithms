#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main – This is the main function contains all written code to be executed
 * Return: Always 0 when successfully run
 */
int main(void)
{
	listint_t *list_elements;
	int array_elements[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t num_elements = sizeof(array_elements) / sizeof(array_elements[0]);

	list_elements = create_listint(array_elements, num_elements);
	if (!list_elements)
		return (1);
	print_list(list_elements);
	printf("\n");
	insertion_sort_list(&list_elements);
	printf("\n");
	print_list(list_elements);
	return (0);
}

/**
 * create_listint – Doubles initial list into second
 *
 * @array: we converting it to the doubled array you know the vibe
 * @size: length of arrays in the section
 *
 * Return: Points to the actual succseful array
 */
listint_t *create_listint(const int *array, size_t size)
{
	listint_t *list_elements;
	listint_t *double_node;
	int *temporary_node;

	list_elements = NULL;
	while (size--)
	{
		double_node = malloc(sizeof(*double_node));
		if (!double_node)
			return (NULL);
		temporary_node = (int *)&double_node->n;
		*temporary_node = array[size];
		double_node->next = list_elements;
		double_node->prev = NULL;
		list_elements = double_node;
		if (list_elements->next)
			list_elements->next->prev = list_elements;
	}
	return (list_elements);
}



