#include "lists.h"

/**
*free_listint2 - frees a linked list
*@head: pointer to the head of the list
*
*Return: void
*/

void free_listint2(listint_t **head)
{
listint_t node;

while(head != null && head* != null)
{
	*head = node;
	head = head->next;
	free(node);
}
}
