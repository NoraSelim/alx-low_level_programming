#include "lists.h"
#include <stdlib.h>

/**
*free_listint - frees a linked list
*@head: head of the list
*
*Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		head = node;
		head = head->next;
		free(node);
	}
}
