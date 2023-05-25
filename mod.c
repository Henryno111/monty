#include "monty.h"

/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @stack: double pointer to the head of the stack
 * @line_number: line number of the instruction
 * Return: no return
 */
void f_mod(stack_t **stack, unsigned int line_number)
{
	stack_t *node;
	int size = 0, remainder;

	node = *stack;
	while (node)
{
	node = node->next;
	size++;
}
if (size < 2)
{
	fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
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
	remainder = node->next->n % node->n;
	node->next->n = remainder;
	*stack = node->next;
	free(node);
}
