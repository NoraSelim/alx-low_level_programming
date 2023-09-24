#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
    size_t node;
    node = 0;

    if (h != NULL) 
    {
        if (h->str == NULL)
        {
            printf(" [%d] (nil)\n", 0);
        }
        else
        {
            printf(" [%d] %s\n", h->len, h->str);
        }

        h = h->next;
        node++;
    }

    return (node);
