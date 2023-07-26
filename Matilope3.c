#include "monty.h"
/**
* freestack - releases a doubly linked list
* @h: stack top
*/
void freestack(stack_t *h)
{
	stack_t *aux;

	aux = h;
	while (h)
	{
		aux = h->next;
		free(h);
		h = aux;
	}
}
