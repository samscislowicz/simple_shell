#include "shell.h"
/**
 * _free - free me!!
 * @head: pointer to the list
 * Return: void
 */
void _free(cmd_finder *head)
{
	cmd_finder *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
