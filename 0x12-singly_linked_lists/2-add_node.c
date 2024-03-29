#include "lists.h"
/**
 * _strlen - returns the length of a string
 * @s: the string whose length to return
 * Return: length of the string
 */

int _strlen(const char *s)
{
int i = 0;

while (s[i] != '\0')
	i++;

return (i);
}

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of the linked list.
 * @str: string to store the list.
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
int length = _strlen(str);

new = malloc(sizeof(list_t));

if (new == NULL)
	return (NULL);

new->str = strdup(str);
new->len = length;
new->next = *head;
*head = new;

return (*head);
}
