#include "monty.h"

/**
 * f_div - will divide the top two elements of the stack.
 * @stack: double pointer to the head of the stack
 * @line_number: line number of the instruction
 * Return: no return
 */
void f_div(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	int size = 0, quotient;

	node = *stack;
	while (node)
{
	node = node->next;
	size++;
}
if (size < 2)
{
	fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
	fclose(bus.file);
	free(bus.content);
	free_stack(*stack);
	exit(EXIT_FAILURE);
}
	node = *stack;
if (node->n == 0)
{
	fprintf(stderr, "L%d: division by zero\n", line_number);
	fclose(bus.file);
	free(bus.content);
	free_stack(*stack);
	exit(EXIT_FAILURE);
}
	quotient = node->next->n / node->n;
	node->next->n = quotient;
	*stack = node->next;
	free(node);
}

