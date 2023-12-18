#include "monty.h"

/**
* f_pop - is the function that prints
* the top of the stack,
* followed by a new line.
*
* @head: is the double head pointer to the stack.
* @counter: is the line count.
*
* Return: Always void.
*
*/

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}

/**
* f_pint - is the function that prints
* the top of the stack,
* followed by a new line.
*
* @head: double head pointer to the stack
* @counter: line count
*
* Return: Always void.
*
*/

void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

/**
* f_nop - is the function that does nothing,
* followed by a new line.
* @head: is the double head pointer to the stack
* @counter: is the line count.
*
* Return: Always void.
*
*/

void f_nop(stack_t **head, unsigned int counter)
{
	(void) counter;
	(void) head;
}
