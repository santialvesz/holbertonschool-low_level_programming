#include "lists.h"
/**
 * add_nodeint_end - Function.
 * @head: Pointer element.
 * @n: Element of type int.
 * Return: listint_t.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list;
	listint_t *new_new;

	new_list = malloc(sizeof(listint_t));

	if (!new_list)
	{
		return (NULL);
	}
	new_list->n = n;
	new_list->next = NULL;
	if (*head == NULL)
	{
		*head = new_list;
	}
	else
	{
			new_new = *head;
			while (new_new->next)
			new_new = new_new->next;
			new_new->next = new_list;
	}
	return (*head);
}
