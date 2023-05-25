#include "monty.h"
/**
 * add_top - adds the top two elements of the stack.
 * @stack: stack pointer
 * @line: line_number
 * Return: no return
*/
void add_top(stack_t **stack, unsigned int line)
{
	stack_t *s;
	int size = 0, sum;

	s = *stack;
	while (s)
	{
		s = s->next;
		size++;
	}
	if (size < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	s = *stack;
	sum = s->n + s->next->n;
	s->next->n = sum;
	*stack = s->next;
	free(s);
}
