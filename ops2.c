#include "monty.h"

/**
* f_pall - is the function that
* prints everything in the stack,
* followed by a new line.
*
* @head: double head pointer to the stack
* @counter: unused line count
*
* Return: Always void.
*
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

/**
* f_swap - is the function that swaps
* the top two elements of the stack,
* followed by a new line.
*
* @head: is the head of stack
* @counter: is the line count
*
* Return: Always void.
*
*/

void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int length = 0, temp;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	temp = h->n;
	h->n = h->next->n;
	h->next->n = temp;
}
