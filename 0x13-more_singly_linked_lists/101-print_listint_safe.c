#include "lists.h"

/**
 * count_to_loop - count unique nodes to print
 * @head: list
 * Return: number of unique nodes
 */
int count_to_loop(const listint_t *head)
{
	int count = 0;
	const listint_t *chaser, *runner;

	chaser = runner = head;

	for (; chaser && runner;)
	{
		chaser = chaser->next;
		runner = runner->next->next;
		count++;

		if (chaser == runner)
		{
			chaser = head;
			for (; chaser != runner; count++)
			{
				chaser = chaser->next;
				runner = runner->next;
			}
			return (count);
		}
	}
	return (0);
}

/**
 * check_loop - find if there's a loop in linked list
 * @head: list
 * Return: loop ? 1 : 0
 */
int check_loop(const listint_t *head)
{
	const listint_t *chaser, *runner;

	chaser = runner = head;

	for (; chaser && runner;)
	{
		chaser = chaser->next;
		runner = runner->next->next;

		if (chaser == runner)
			return (1);
	}
	return (0);
}

/**
 * print_listint_safe - prints list with addresses
 * @head: list
 * Return: nodes / exit(98)
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	int get_loop;
	size_t nodes = 0;
	const listint_t *temp;

	if (!head)
		exit(98);

	get_loop = check_loop(head);

	if (get_loop)
	{
		count = count_to_loop(head);
		for (get_loop = 0; get_loop < count; get_loop++)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			nodes++;
			temp = temp->next;
		}
	}
	else if (!get_loop)
	{
		temp = head;
		for (; temp;)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			nodes++;
			temp = temp->next;
		}
	}

	return (nodes);
}
