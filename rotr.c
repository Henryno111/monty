#include "monty.h"
/**
 *f_rotr- rotates the stack to the bottom
 *@stack: stack head
 *@line_number: line_number
 *Return: no return
 */
void f_rotr(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;

if (*stack == NULL || (*stack)->next == NULL)
{

}
	while (temp->next)
{
	temp = temp->next;
}
	temp->next = *stack;
	temp->prev->next = NULL;
	temp->prev = NULL;
	(*stack)->prev = temp;
	(*stack) = temp;
}

