#include "lists.h"

/**
 * add_node - add a new node
 * at beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 *
 * Return: the number of nodes.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);
	n_node->str = strdup(str);

	n_node->len = _strlen(str);
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
