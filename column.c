#include "monty.h"

/**
* f_queue - is the function that prints
* the top of the column,
* followed by a new line.
*
* @head: is the head of the column.
* @counter: is the line count
*
* Return: Always void.
*
*/

void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
* addqueue - is the function that adds
* a node to the tail the queue,
* followed by a new line.
*
* @n: is the new value.
* @head: is the head of the queue.
*
* Return: Always void.
*
*/

void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
}
