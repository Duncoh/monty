#include "monty.h"

/**
* free_stack - is the function that frees
* a doubly linked list,
* followed by a new line.
*
* @head: is the head pointer to the stack.
*
* Return: Always void.
*
*/

void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
* f_stack - is the function that prints the top,
* followed by a new line.
*
* @head: is the head of stack.
* @counter: is the line count.
*
* Return: Always void.
*
*/

void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
