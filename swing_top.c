#include "monty.h"

/**
* f_rotl- is the function that swings
* the stack to the top,
* followed by a new line.
*
* @head: is the head of the stack.
* @counter: is the line count.
*
* Return: Always void.
*/

void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
