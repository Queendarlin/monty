#include "monty.h"

/**
 * faqu_error_handler -  For printing errors to stderr
 * @faqu_error_num: Error Num
 * @faqu_file_name: Bitcode file
 * @faqu_line_num: For command line number
 */
void faqu_error_handler(int faqu_error_num,
		char *faqu_file_name, int faqu_line_num)
{
	switch (faqu_error_num)
	{
		case 1:
			fprintf(stderr, "USAGE: monty file\n");
			break;
		case 2:
			fprintf(stderr, "Error: Can't open file %s\n", faqu_file_name);
			break;
		case 3:
			fprintf(stderr, "L%d: unknown instruction %s\n", faqu_line_num,
					faqu_file_name);
			break;
		case 4:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		case 5:
			fprintf(stderr, "L%d: usage: push integer\n", faqu_line_num);
			break;
		case 6:
			fprintf(stderr, "L%d: can't pint, stack empty\n", faqu_line_num);
			break;
		case 7:
			fprintf(stderr, "L%d: can't pop an empty stack\n", faqu_line_num);
			break;
		case 8:
			fprintf(stderr, "L%d: can't swap, stack too short\n", faqu_line_num);
			break;
		case 9:
			fprintf(stderr, "L%d: can't add, stack too short\n", faqu_line_num);
			break;
		case 10:
			fprintf(stderr, "L%d: can't sub, stack too short\n", faqu_line_num);
			break;
		default:
			return;
	}
	faqu_free_dlistint(faqu_head);
	exit(EXIT_FAILURE);
}
