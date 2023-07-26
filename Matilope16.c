#include "monty.h"
/**
 * _fpstr - outputs the string from the top of the stack
 * New follows
 * @h: stack top
 * @counter: line_index
 * Return: void
*/
void _fpstr(stack_t **h, unsigned int counter)
{
	stack_t *m;
	(void)counter;

	m = *h;
	while (m)
	{
		if (m->n > 127 || m->n <= 0)
		{
			break;
		}
		printf("%c", m->n);
		m = m->next;
	}
	printf("\n");
}
