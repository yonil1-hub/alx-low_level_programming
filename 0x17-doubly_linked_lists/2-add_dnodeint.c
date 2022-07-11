#include "lists.h"
<<<<<<< HEAD

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: double pointer to the head of the list
 * @n: data to be added
 *
 * Return: he address of the new element, or NULL if it failed
=======
/**
 * *add_dnodeint - function adds new node to beginning of list
 *
 *@head: pointer to pointer of head of linked list
 *@n: const int pointer
 *
 * Return: address of new element, or NULL if failed
>>>>>>> 8d4298a42810832aa0ab7c054d9a09fb6147afc6
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
<<<<<<< HEAD
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
=======
	dlistint_t *newhead = NULL;

	newhead = malloc(sizeof(dlistint_t));
	if (newhead == NULL)
		return (NULL);

	newhead->n = n;
	newhead->next = (*head);
	newhead->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = newhead;

	(*head) = newhead;

	return (newhead);
>>>>>>> 8d4298a42810832aa0ab7c054d9a09fb6147afc6
}
