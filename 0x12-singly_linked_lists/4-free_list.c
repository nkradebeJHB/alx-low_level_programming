#include "lists.h"
/**
 * free_list - Frees a list
 * @head: Pointer to the list head
 */
void free_list(list_t *head)
{
	list_t *tmp_list;

	while (head)
	{
		tmp_list = head->next;
		free(head->str);
		free(head);
		head = tmp_list;
	}
}
