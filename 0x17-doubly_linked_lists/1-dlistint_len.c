#include "lists.h"
<<<<<<< HEAD

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
=======
/**
 * dlistint_len - function returns number of elements in linked list
 *
 *@h: const list_t pointer to head of list
 *
 * Return: number of elements
>>>>>>> 8d4298a42810832aa0ab7c054d9a09fb6147afc6
 */

size_t dlistint_len(const dlistint_t *h)
{
<<<<<<< HEAD
	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
=======
	int x;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}
	return (x);
>>>>>>> 8d4298a42810832aa0ab7c054d9a09fb6147afc6
}
