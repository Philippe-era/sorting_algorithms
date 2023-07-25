#include "sort.h"

/**
 *bubble_sort – sorts arrays in the mose definite way going forward
 *@array: container that stores the elements you know the vibes
 *@size: the relevant size for it alll
 */
void bubble_sort(int *array, size_t size)
{
	size_t join_num, initial;
	int number_array;

	if (array == NULL  || size < 2)
		return;
	for (initial = 0; initial < size - 1; initial++)
	{
		for (join_num = 0; join_num < size - initial - 1; join_num++)
		{
			if (array[join_num] > array[join_num + 1])
			{
				number_array = array[join_num];
				array[join_num] = array[join_num + 1];
				array[join_num + 1] = number_array;
				print_array(array, size);
			}
		}
	}
}

