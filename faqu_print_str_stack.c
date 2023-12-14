#include "monty.h"

/**
 * faqu_print_str_stack - For printing top element string
 * @faqu_actual_head: For the list head
 * @faqu_line_num: For command line number
 */

void faqu_print_str_stack(stack_t **faqu_actual_head,
		unsigned int faqu_line_num)
{
	stack_t *faqu_temp_node;

	(void)faqu_line_num;
	faqu_temp_node = *faqu_actual_head;
	if (faqu_temp_node == NULL)
	{
		printf("\n");
		return;
	}
	while (faqu_temp_node != NULL)
	{
		if (faqu_temp_node->n == 0)
			break;
		if (faqu_temp_node->n < 32 || faqu_temp_node->n > 126)
			break;
		printf("%c", faqu_temp_node->n);
		faqu_temp_node = faqu_temp_node->next;
	}
	printf("\n");
}
