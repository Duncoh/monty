#include "monty.h"

/**
* addnode - is the function that adds node to the head stack,
* followed by a new line.
*
* @head: is the head of stack.
*
* @n: is the new value to be obtained.
*
* Return: Always void if successful.
*/

void addnode(stack_t **head, int n)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (temp)
		temp->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
