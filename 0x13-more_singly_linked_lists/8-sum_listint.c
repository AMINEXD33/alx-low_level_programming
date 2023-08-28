#include "lists.h"
/**
 * sum_listint- summ all nodes values
 * @head: the head of the linked list
 * Return: the summ of the values of all nodes
 */
int sum_listint(listint_t *head)
{
	int summ;

	summ = 0;
	while (head->next != NULL)
	{
		summ += head->n;
		head = head->next;
	}
	summ += head->n;
}
