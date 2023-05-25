#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack.
 * @stack: stack head
 * @line_number: line_number
 * Return: no return
 */
void f_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *top;

	int size = 0, temp;

	top = *stack;

	while (top)
{
	top = top->next;
	size++;
}
if (size < 2)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
	fclose(bus.file);
	free(bus.content);
	free_stack(*stack);
	exit(EXIT_FAILURE);
}
	top = *stack;
	temp = top->n;
	top->n = top->next->n;
	top->next->n = temp;
}
