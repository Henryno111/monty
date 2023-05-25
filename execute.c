#include "monty.h"
/**
* execute - runs the opcode
* @line: head linked list - stack
* @index: line_counter
* @file: poiner to monty file
* @text: line text
* Return: no return
*/
int run(char *text, stack_t **line, unsigned int index, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *cmd;

	cmd = strtok(text, " \n\t");
	if (cmd && cmd[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && cmd)
	{
		if (strcmp(cmd, opst[i].opcode) == 0)
		{	opst[i].f(line, index);
			return (0);
		}
		i++;
	}
	if (cmd && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", index, cmd);
		fclose(file);
		free(text);
		free_stack(*line);
		exit(EXIT_FAILURE); }
	return (1);
}
