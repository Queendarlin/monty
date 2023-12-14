#include "monty.h"

/**
 * faqu_get_op_func - For finding a specific opcode
 * @faqu_s: monty instruction
 *
 * Return: pointer or null
 */

void (*faqu_get_op_func(char *faqu_s))(stack_t **, unsigned int)
{
	instruction_t faqu_implementations[] = {
		{"push", faqu_push_stack},
		{"pall", faqu_print_stack},
		{"pint", faqu_pint_stack},
		{"pop", faqu_pop_stack},
		{"swap", faqu_swap_stack},
		{"add", faqu_add_stack},
		{"nop", faqu_no_operation},
		{"sub", faqu_sub_stack},
		{"div", faqu_div_stack},
		{"mul", faqu_mul_stack},
		{"mod", faqu_mod_stack},
		{"pchar", faqu_print_char_stack},
		{"pstr", faqu_print_str_stack},
		{"rotl", faqu_rotate_top},
		{"rotr", faqu_rotate_bottom},
		{NULL, NULL}
	};
	int faqu_i = 0;

	while (faqu_implementations[faqu_i].opcode)
	{
		if (!(strcmp(faqu_implementations[faqu_i].opcode, faqu_s)))
			return (faqu_implementations[faqu_i].f);
		faqu_i++;
	}
	return (NULL);
}
