#include "monty.h"
/**
 *f_sub- sustration
 *@stack: stack head
 *@line_number: line_number
 *Return: no return
 */
void f_sub(stack_t **stack, unsigned int line_number)
{
	stack_t *top;

	int diff, size;

	top = *stack;
	for (size = 0; top != NULL; size++)
	top = top->next;
if (size < 2)
{
	fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
	fclose(bus.file);
	free(bus.content);
	free_stack(*stack);
	exit(EXIT_FAILURE);
}
	top = *stack;
	diff = top->next->n - top->n;
	top->next->n = diff;
	*stack = top->next;
	free(top);
}
