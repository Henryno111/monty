#include "monty.h"
/**
 * f_push - add node to the stack
 * @stack: stack head
 * @line_number: line_number
 * Return: no return
 */
void f_push(stack_t **stack, unsigned int line_number)
{
	int num, i = 0, valid = 0;

if (bus.arg)
	{
	if (bus.arg[0] == '-')
		i++;

for (; bus.arg[i] != '\0'; i++)
	{
if (bus.arg[i] > 57 || bus.arg[i] < 48)
	valid = 1;
	}
if (valid == 1)
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
	num = atoi(bus)
