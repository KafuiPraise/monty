#include "monty.h"
/**
 * _fpop - outputs the value of the top element
 * @h: stack top
 * @counter: line_index
 * Return: void
*/
void _fpop(stack_t **h, unsigned int counter)
{
	stack_t *m;

	if (*h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		freestack(*h);
		exit(EXIT_FAILURE);
	}
	m = *h;
	*h = m->next;
	free(m);
}
