#include "monty.h"

/**
* f_rotr - is the function that swings
* the stack to the bottom,
* followed by a new line.
*
* @head: is the stack head of the stack.
* @counter: is the line count.
*
* Return: Always void.
*
*/

void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
