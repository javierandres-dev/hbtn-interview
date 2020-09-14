#include "lists.h"
/**
* check_cycle - checks if a singly linked list has a cycle in it.
* @list: pointer to a singly linked list
*
* Return: 0 if there is no cycle, 1 if there is a cycle
**/
int check_cycle(listint_t *list)
{
	listint_t *listA = list;
	listint_t *listB = list;

	while (listA && listA->next && listB && listB->next->next)
	{
		listA = listA->next;
		listB = listB->next->next;
		if (listA == listB)
			return (1);
	}
	return (0);
}
