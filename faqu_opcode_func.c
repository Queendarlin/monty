#include "monty.h"

/**
 * faqu_opcode_func - For finding opcode function
 * @faqu_value: For the value to be added
 * @faqu_monty_opcode: For the monty instruction string
 * @faqu_line_num: For the instruction line
 * @faqu_flag: For determining a stack or queue
 *
 */
void faqu_opcode_func(char *faqu_value, char *faqu_monty_opcode,
		int faqu_line_num, int faqu_flag)
{
	void (*faqu_operation)(stack_t **, unsigned int);
	int faqu_signo = 1, faqu_j = 0;
	unsigned int faqu_int_value = 0;

	faqu_operation = faqu_get_op_func(faqu_monty_opcode);
	if (faqu_operation)
	{
		if (strcmp(faqu_monty_opcode, "push") == 0)
		{
			if (faqu_value == NULL)
				faqu_error_handler(5, faqu_monty_opcode, faqu_line_num);
			else if (faqu_value[0] == '-')
			{
				faqu_value = faqu_value + 1;
				faqu_signo = (faqu_signo * -1);
			}
			while (faqu_value[faqu_j])
			{
				if (isdigit(faqu_value[faqu_j]) == 0)
					faqu_error_handler(5, faqu_monty_opcode, faqu_line_num);
				faqu_j++;
			}
			faqu_int_value = atoi(faqu_value) * faqu_signo;
			if (faqu_flag == 0)
				faqu_operation(&faqu_head, faqu_int_value);
			if (faqu_flag == 1)
				faqu_push_queue(&faqu_head, faqu_int_value);
		}
		else
			faqu_operation(&faqu_head, faqu_line_num);
		return;
	}
	faqu_error_handler(3, faqu_monty_opcode, faqu_line_num);
}
