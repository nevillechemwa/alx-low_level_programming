#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
void free_listint2(listint_t **head)
{
	 listint_t *current, *next;

	 if (head == NULL || *head == NULL)
		 return;

	 current = *head;
	 while (current != NULL)
	 {
		next = current->next;
		free(current);
		current = next;
	 }
	 *head = NULL;
}
