#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: the beginning of the list to free
 * Return: void
 */

void free_list(list_t *head)
{
list_t *tmp;

while (head != NULL)
{
	tmp = head->next;
	free(head->str);
	free(head);
	head = tmp;
}
}
