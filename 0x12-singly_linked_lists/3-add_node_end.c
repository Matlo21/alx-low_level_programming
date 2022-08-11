#include "lists.h"
/**
 * _strlen - returns the length of a string
 * @s: the string whose length to return
 * Return: the length of string
 */

int _strlen(const char *s)
{
int i = 0;

while (s[i] != '\0')
	i++;
return (i);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the list
 * @str: string to add to list
 * Return: address of new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *tmp;
int length = _strlen(str);

new = malloc(sizeof(list_t));

if (new == NULL)
	return (NULL);
new->str = strdup(str);
new->len = length;
new->next = NULL;

if (*head == NULL)
{
	*head = new;
	return (new);
}
else
{
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}
return (new);
}
