#include "sort.h"
/**
 * selection_sort – function that will sort the array out perfectly
 * size:  the whole weight and length of the array
 * @array: elements containers within the array
 */
void selection_sort(int *array, size_t size)
{
	size_t initial, num_elements;
	int temporary_node, swap_nodes, pattern = 0;

	if (array == NULL)
		return;
	for (initial = 0; initial < size; initial++)
	{
		temporary_node = initial;
		pattern = 0;
		for (num_elements = initial + 1; num_elements < size; num_elements++)
		{
			if (array[temporary_node] > array[num_elements])
			{
				temporary_node = num_elements;
				pattern += 1;
			}
		}
		swap_nodes = array[initial];
		array[initial] = array[temporary_node];
		array[temporary_node] = swap_nodes;
		if (pattern != 0)
			print_array(array, size);
	}
}

