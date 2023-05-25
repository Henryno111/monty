#include "monty.h"
/**
 * f_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @stack: stack head
 * @line_number: line_number
 * Return: no return
 */
void f_pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *top;

	top = *stack;
if (!top)
	{
	fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
	fclose(bus.file);
	free(bus.content);
	free_stack(*stack);
	exit(EXIT_FAILURE);
	}
if (top->n > 127 || top->n < 0)
	{
	fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
	fclose(bus.file);
	free(bus.content);
	free_stack(*stack);
	exit(EXIT_FAILURE);
	}
	printf("%c\n", top->n);
}
