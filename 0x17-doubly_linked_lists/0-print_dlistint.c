#include "lists.h"

/**
<<<<<<< HEAD
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the list
=======
 * print_dlistint - function prints all elements of dlistint_t list
 *
 *@h: pointer to head of linked list
>>>>>>> 8d4298a42810832aa0ab7c054d9a09fb6147afc6
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
<<<<<<< HEAD

	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
=======
	int x;

	for (x = 0; h != NULL; x++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (x);
>>>>>>> 8d4298a42810832aa0ab7c054d9a09fb6147afc6
}
