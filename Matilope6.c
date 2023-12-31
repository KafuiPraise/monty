#include "monty.h"
/**
 * _fpall - outputs the stack
 * @h: stack top
 * @counter: not utilized
 * Return: void
*/
void _fpall(stack_t **h, unsigned int counter)
{
	stack_t *m;
	(void)counter;

	m = *h;
	if (m == NULL)
		return;
	while (m)
	{
		printf("%d\n", m->n);
		m = m->next;
	}
}
