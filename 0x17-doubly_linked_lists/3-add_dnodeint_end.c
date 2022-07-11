#include "lists.h"
<<<<<<< HEAD

/**
 *  add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: double pointer to the head of the list
 * @n: integer to add to the new node
 *
 * Return:  the address of the new element, or NULL if it failed
=======
/**
 * *add_dnodeint_end - function adds new node to end of list
 *
 *@head: pointer to pointer of head of linked list
 *@n: const int pointer
 *
 * Return: address of new element, or NULL if failed
>>>>>>> 8d4298a42810832aa0ab7c054d9a09fb6147afc6
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
<<<<<<< HEAD
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while ((*head)->next != NULL)
		*head = (*head)->next;

	(*head)->next = new_node;
	new_node->prev = *head;

	return (new_node);
=======
	dlistint_t *last = *head;
	dlistint_t *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if ((*head) == NULL)
	{
		newnode->prev = NULL;
		(*head) = newnode;
		return (newnode);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = newnode;

	if (newnode->next != NULL)
		newnode->next->prev = newnode;

	return (newnode);
>>>>>>> 8d4298a42810832aa0ab7c054d9a09fb6147afc6
}
