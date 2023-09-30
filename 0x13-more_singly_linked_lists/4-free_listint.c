#include "lists.h"

/**
*free_listint - frees a linked list
*@head: head of the list
*
*Return: void
*/

void free_listint(listint_t *head)
{
	size_t node;
	while (head)
	{
		node = head;
		node->next;
		free (node);
	}

