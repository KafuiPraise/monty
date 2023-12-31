#include "monty.h"
/**
  *_fsub- deduction
  *@h: stack top
  *@counter: line_index
  *Return: no return
 */
void _fsub(stack_t **h, unsigned int counter)
{
	stack_t *aux;
	int sus, nodes;

	aux = *h;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		freestack(*h);
		exit(EXIT_FAILURE);
	}
	aux = *h;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*h = aux->next;
	free(aux);
}
