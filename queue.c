#include "monty.h"
/**
 * f_queue - prints the top
 * @stack: stack head
 * @line_number: line_number
 * Return: no return
 */
void f_queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	bus.lifi = 1;
}
/**
 * addqueue - add node to the tail stack
 * @num: new_value
 * @stack: head of the stack
 * Return: no return
 */
void addqueue(stack_t **stack, int num)
{
	stack_t *new_node, *temp;

	temp = *stack;
	new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
	{
	printf("Error\n");
	}
	new_node->n = num;
	new_node->next = NULL;
if (temp)
	{
	while (temp->next)
	temp = temp->next;
}
if (!temp)
{
	*stack = new_node;
	new_node->prev = NULL;
}
	else
	{
	temp->next = new_node;
	new_node->prev = temp;
	}
}
