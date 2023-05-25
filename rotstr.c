#include "monty.h"
/**
  *rotate_stack- rotates the stack to the bottom
  *@stack: stack pointer
  *@line: line_number
  *Return: no return
 */
void rotate_stack(stack_t **stack, __attribute__((unused)) unsigned int line)
{
	stack_t *temp;

	temp = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	while (next->next)
	{
		temp = temp->next;
	}
	temp->next = *stack;
	temp->prev->next = NULL;
	temp->prev = NULL;
	(*stack)->prev = temp;
	(*stack) = temp;
}
