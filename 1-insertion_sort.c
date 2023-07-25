#include "sort.h"
/**
 *swap_node – swaps and helps the nodes in order to make it work
 *@node: node to be analysed and checked
 *@list: node list we evulating
 *Return: the current node will be returned to its original place
 */

listint_t *swap_node(listint_t *node, listint_t **list)
{
	listint_t *back_node = node->prev, *current_node = node;

	back_node->next = current_node->next;
	if (current_node->next)
		current_node->next->prev = back_node;
	current_node->next = back_node;
	current_node->prev = back_node->prev;
	back_node->prev = current_node;
	if (current_node->prev)
		current_node->prev->next = current_node;
	else
		*list = current_node;
	return (current_node);
}


/**
 * insertion_sort_list – this arranges the list in order you know the vibes
 * @list: unsorted link means it is in disorder you know the vibe
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node_sort;

	if (list == NULL || (*list)->next == NULL)
		return;
	node_sort = (*list)->next;
	while (node_sort)
	{
		while ((node_sort->prev) && (node_sort->prev->n > node_sort->n))
		{
			node_sort = swap_node(node_sort, list);
			print_list(*list);
		}
		node_sort = node_sort->next;
	}
}

