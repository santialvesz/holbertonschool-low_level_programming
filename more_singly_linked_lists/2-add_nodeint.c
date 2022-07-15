#include "lists.h"
/**
 * add_nodeint - Function of type pointer.
 * @head: Pointer element.
 * @n: Element of type int.
 * Return: listint_t.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
	{
		return (NULL);
	}
	new_list->n = n;
	new_list->next = *head;
	*head = new_list;
	return (*head);
}
