#include "monty.h"
/**
 * print_str - prints the string starting at the top of the stack,
 * followed by a new line
 * @stack: stack pointer
 * @line: line_number
 * Return: no return
*/
void print_str(stack_t **stack, unsigned int line)
{
	stack_t *s;
	(void)line;

	s = *stack;
	while (s)
	{
		if (s->n > 127 || s->n <= 0)
		{
			break;
		}
		printf("%c", s->n);
		s = s->next;
	}
	printf("\n");
}
