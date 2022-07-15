#include "lists.h"
/**
 * get_nodeint_at_index - Function.
 * @head: Pointer element.
 * @index: Element of type int.
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i != index)
	{
	i++;
	head = head->next;
	}
	if (head)
	{
		return (head);
	}
	else
		return (NULL);
}
