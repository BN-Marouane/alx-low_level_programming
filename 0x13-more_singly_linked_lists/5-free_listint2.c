#include "lists.h"

/**
 *  * free_listint2 - frees a listint_t list.
 *   * @head: is a pointer to the head pointer
 *    * Return: void
 *     */

void free_listint2(listint_t **head)
{
		listint_t *current;

			while (*head != NULL)
					{

								free(*head);
										*head = NULL;
											}
}

