#include "sort.h"

/**
 * swap – swith of the array and variables as temporary
 * @a: first num to be switched
 * @b: second num to be switched
 * Return: nothing will be returned it’s a voidable function
 */
void swap(int *a, int *b)
{
        int temporary_variable;

        temporary_variable = *a;
        *a = *b;
        *b = temporary_variable;
}

/**
 * partition – Partiton very key point of this program ran you will
 * @array: Container of elements in the array to be checked
 * @low: data structure contains integer to be ran
 * @high: data structure contains integer to be ran
 * @size: length of array in the container to be executed
 * Return: number of the integer
 */
int partition(int *array, int low, int high, size_t size)
{
	int important_element = array[high];
	int answer = low - 1, solution;

	for (solution = low; solution <= high; solution++)
	{
		if (array[solution] <= important_element)
		{
			answer++;
			if (answer != solution)
			{
				swap(&array[answer], &array[solution]);
				print_array(array, size);
			}
		}
	}
	return (answer);
}

/**
 * lomuto_qsort – the function will be sorted recursively
 * @array: array to be checked out and fixed
 * @low: low is the lowest in the arrays
 * @high: highest in the room you know the vibe
 * @size: length of the array in size
 * Return: nothing will be returned sorry
 */
void lomuto_qsort(int *array, int low, int high, size_t size)
{
	int initial;

	if (low < high)
	{
		initial = partition(array, low, high, size);
		lomuto_qsort(array, low, initial - 1, size);
		lomuto_qsort(array, initial + 1, high, size);
	}
}
/**
 * quick_sort – quickly sorts out the array in a sortable manner
 * @array: array that will be sorted out you know the vibe
 * @size: length and weight of array
 * Return: a sorted array will be returned
 */
void quick_sort(int *array, size_t size)
{
	lomuto_qsort(array, 0, size - 1, size);
}

