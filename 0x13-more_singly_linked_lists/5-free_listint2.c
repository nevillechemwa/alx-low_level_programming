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
	listint_t *tmp;

	 while (*head)
		 tmp = (*head)->next;
	 free(*head);
	 *head = tmp;
}
