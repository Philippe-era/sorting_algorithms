#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
/**
 * struct listint_s – Double linked list to be evualated
 * @n: number to handle the integers and all
 * @prev: points to the previous node in the lists
 * @next: Probably the next node will be touched
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void merge_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
listint_t *swap_node(listint_t *node, listint_t **list);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
listint_t *swap_node(listint_t *node, listint_t **list);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);


#endif
