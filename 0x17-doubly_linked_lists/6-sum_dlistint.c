#include "lists.h"
<<<<<<< HEAD

/**
 *  sum_dlistint - returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: double pointer to the head of the list
 *
 * Return: if the list is empty, return 0
=======
/**
 * sum_dlistint - function returns sum of all data of a list
 *
 *@head: pointer to pointer of head of linked list
 *
 * Return: 0 if empty
>>>>>>> 8d4298a42810832aa0ab7c054d9a09fb6147afc6
 */

int sum_dlistint(dlistint_t *head)
{
<<<<<<< HEAD

	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
=======
	int x = 0;

	while (head)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
>>>>>>> 8d4298a42810832aa0ab7c054d9a09fb6147afc6
}
