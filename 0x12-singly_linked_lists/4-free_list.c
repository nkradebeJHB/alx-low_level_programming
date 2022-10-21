#include "list.h"
/**
 * free_list - Frees a list
 * @head: Pointer to the list head
 */
void free_list(list_t *head)
{
	list_t *tmp_list;

	while (head)
	{
		list_tmp = head->next;
		free(head->str);
		free(head);
		head = list_tmp;
	}
}
