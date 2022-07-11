#include "lists.h"
<<<<<<< HEAD

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head of list
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 * 
 * Return:  the address of the new node, or NULL if it failed
=======
/**
 * *insert_dnodeint_at_index - function inserts new node at given position
 *
 *@h: pointer to pointer of head of linked list
 *@idx: unsigned int index position
 *@n: int data
 *
 * Return: address of new element or NULL if failed
>>>>>>> 8d4298a42810832aa0ab7c054d9a09fb6147afc6
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
<<<<<<< HEAD
}
=======
	dlistint_t *currentnode;
	dlistint_t *newnode;

	while (*h)
	{
		newnode = malloc(sizeof(dlistint_t));
		currentnode = *h;
		newnode->n = n;

		if (idx == 0)
		{
			newnode->next = NULL;
			return (newnode);
		}
		while (currentnode->next != NULL && idx - 1 > 0)
		{
			currentnode = currentnode->next;
			idx--;
		}
		if (currentnode->next == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->next = currentnode->next;
		currentnode->next = newnode;
		return (newnode);
	}
	return (NULL);
}
>>>>>>> 8d4298a42810832aa0ab7c054d9a09fb6147afc6
