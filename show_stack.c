#include "monty.h"
/**
 * show_stack - shows the stack
 * @stack: stack pointer
 * @index: no used
 * Return: no return
*/
void show_stack(stack_t **stack, unsigned int index)
{
	stack_t *s;
	(void)index;

	s = *stack;
	if (s == NULL)
		return;
	while (s)
	{
		printf("%d\n", s->n);
		s = s->next;
	}
}
