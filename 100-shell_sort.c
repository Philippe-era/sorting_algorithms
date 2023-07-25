#include "sort.h"
/**
 * shell_sort - order in array of elements 
 * @array: coontainer of elements with data
 * @size: length of the array width and height
 **/

void shell_sort(int *array, size_t size)
{
	unsigned int space_between = 1, initial, join_num;
	int temporary_variable;

	if (array == NULL)
		return;
	if (size < 2)
		return;
	while (space_between < size / 3)
		space_between = space_between * 3 + 1;

	while (space_between > 0)
	{
		for (initial = space_between; initial < size; initial++)
		{
			temporary_variable = array[initial];
			join_num = initial;
			while (join_num >= space_between && array[join_num - space_between] > temporary_variable)
			{
				array[join_num] = array[join_num - space_between];
				join_num -= space_between;
			}
			array[join_num] = temporary_variable;
		}
		print_array(array, size);
		space_between /= 3;
	}
}

