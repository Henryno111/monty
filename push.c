#include "monty.h"
/**
 * f_push - add node to the stack
 * @stack: stack head
 * @line_number: line_number
 * Return: no return
 */
void f_push(stack_t **stack, unsigned int line_number)
{
	int num, i = 0, error = 0;

	if (bus.arg)
{
	if (bus.arg[0] == '-')
	i++;
	for (; bus.arg[i] != '\0'; i++)
{
	if (bus.arg[i] > 57 || bus.arg[i] < 48)
	error = 1;
}
	if (error == 1)
{
	fprintf(stderr, "L%d: usage: push integer\n", line_number);
	fclose(bus.file);
	free(bus.content);
	free_stack(*stack);
	exit(EXIT_FAILURE);
}
}
	else
{
	fprintf(stderr, "L%d: usage: push integer\n", line_number);
	fclose(bus.file);
	free(bus.content);
	free_stack(*stack);
	exit(EXIT_FAILURE);
}
	num = atoi(bus.arg);
	if (bus.lifi == 0)
	addnode(stack, num);
	else
	addqueue(stack, num);
}

