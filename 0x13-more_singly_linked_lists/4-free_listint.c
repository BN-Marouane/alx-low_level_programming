#include "lists.h"

/**
 *  * free_listint - frees a listint_t list.
 *   * @head: pointer to the head of the linkedlist
 *    *
 *     * Return:void
 *      */

void free_listint(listint_t *head)
{
		listint_t *current;

			while (head != NULL)
					{
								current = head->next;
										free(head);

												head = current;
													}
}
