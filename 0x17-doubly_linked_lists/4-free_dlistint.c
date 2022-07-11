#include "lists.h"
<<<<<<< HEAD

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the head of the list.
 *
 *
=======
/**
 * *free_dlistint - function frees a dlistint_t list
 *
 *@head: pointer to pointer of head of linked list
 *
 * Return: void
>>>>>>> 8d4298a42810832aa0ab7c054d9a09fb6147afc6
 */

void free_dlistint(dlistint_t *head)
{
<<<<<<< HEAD

	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
=======
	dlistint_t *node = head;
	dlistint_t *temp;

	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp);
		head = NULL;
>>>>>>> 8d4298a42810832aa0ab7c054d9a09fb6147afc6
	}
}
