#include "lists.h"
<<<<<<< HEAD

/**
 * get_dnodeint_at_index - eturns the nth node of a dlistint_t linked list.
 * @head: double pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: if the node does not exist, return NULL
 *          where index is the index of the node, starting from 0
=======
/**
 * *get_dnodeint_at_index - function returns nth node of a list
 *
 *@head: pointer to pointer of head of linked list
 *@index: index of node starting at 0
 *
 * Return:  NULL if node does not exit
>>>>>>> 8d4298a42810832aa0ab7c054d9a09fb6147afc6
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
<<<<<<< HEAD
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;
=======
	dlistint_t *current = head;
	unsigned int i = 0;

>>>>>>> 8d4298a42810832aa0ab7c054d9a09fb6147afc6
	while (current != NULL)
	{
		if (i == index)
			return (current);
<<<<<<< HEAD
		current = current->next;
		i++;
=======
		i++;
		current = current->next;
>>>>>>> 8d4298a42810832aa0ab7c054d9a09fb6147afc6
	}
	return (NULL);
}
