#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the
 * data (n) of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If the list is empty - 0.
 * Otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)

	int data;
	int sum = 0;

if (head == (NULL))
{
	return (0);
}
else
{
	for (int data = 0; data < n ; data++)
	{
		if (head != NULL)
		{
			head = head->next
				head = head->n;
			sum+= data
		}
		return (data);
	}
