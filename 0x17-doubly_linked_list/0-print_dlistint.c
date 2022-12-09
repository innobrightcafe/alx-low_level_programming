#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**

print_dlistint - prints all the elements of a dlistint_t lists
@h: pointer to the head of the list

Return: the number of nodes in the list
*/

int main(void)
{
	size_t print_dlistint(const dlistint_t *h)

	size_t count = 0;

	while (h)
		printf("%d\n", h->n);
	h = h->next;
	count++;
	return (count);
}

#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
