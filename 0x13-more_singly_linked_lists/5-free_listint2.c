#include "lists.h"

/**
 *free_listint2 - frees a linked list
 *@head: pointer to the head of the list
 *
 *Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *temp_variable;

	if (head == NULL)
		return; /* do not do anything */
	while (*head != NULL)
	{
		temp_variable =  *head;
		*head = (*head)->next;
		free(temp_variable);
	}
	/* *head = NULL; */ /* not needed */
}
