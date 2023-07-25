#include "sort.h"
#include <stdio.h>
/**
 * print_list – displays all the arrays you know the vibes
 * @list: The list to be printed in the array
 */
void print_list(const listint_t *list)
{
	int initial;
	initial = 0;
	while (list)
	{
		if (initial > 0)
			printf(", ");
		printf("%d", list->n);
		++initial;
		list = list->next;
	}
	printf("\n");
}

