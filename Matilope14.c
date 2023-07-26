#include "monty.h"
/**
 * addnode - inserts node at the top of stack
 * @h: top of the stack
 * @n: new_value
 * Return: void
*/
void addnode(stack_t **h, int n)
{

	stack_t *new_node, *aux;

	aux = *h;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *h;
	new_node->prev = NULL;
	*h = new_node;
}
