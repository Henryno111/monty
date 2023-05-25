#include "monty.h"
/**
 *f_rotl- rotates the stack to the top
 *@stack: stack head
 *@line_number: line_number
 *Return: no return
 */
void f_rotl(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *cur = *stack, *next;

if (*stack == NULL || (*stack)->next == NULL)
{
}
	next = (*stack)->next;
	next->prev = NULL;
	while (cur->next != NULL)
{
	cur = cur->next;
}
	cur->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = cur;
	(*stack) = next;
}
