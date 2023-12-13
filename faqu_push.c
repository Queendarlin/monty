#include "monty.h"

/**
 * faqu_push - For adding node to the stack
 * @faqu_head: for the stack head
 * @faqu_counter: For line number
 */
void faqu_push(stack_t **faqu_head, unsigned int faqu_counter)
{
	int faqu_n, faqu_j = 0, faqu_flag = 0;

	if (faqu_bus.fq_arg)
	{
		if (faqu_bus.fq_arg[0] == '-')
			faqu_j++;
		for (; faqu_bus.fq_arg[faqu_j] != '\0'; faqu_j++)
		{
			if (faqu_bus.fq_arg[faqu_j] > 57 || faqu_bus.fq_arg[faqu_j] < 48)
				faqu_flag = 1;
		}
		if (faqu_flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", faqu_counter);
			fclose(faqu_bus.fq_file);
			free(faqu_bus.fq_content);
			faqu_free_stack(*faqu_head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", faqu_counter);
		fclose(faqu_bus.fq_file);
		free(faqu_bus.fq_content);
		faqu_free_stack(*faqu_head);
		exit(EXIT_FAILURE);
	}

	faqu_n = atoi(faqu_bus.fq_arg);
	if (faqu_bus.fq_lifi == 0)
		faqu_addnode(faqu_head, faqu_n);
	else
		faqu_addqueue(faqu_head, faqu_n);
}
