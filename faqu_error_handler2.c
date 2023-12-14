#include "monty.h"

/**
 * faqu_error_handler2 - For printing more errors to stderr .
 * @faqu_error_num: Error Num
 * @faqu_line_num: For command line number
 */
void faqu_error_handler2(int faqu_error_num, int faqu_line_num)
{
	switch (faqu_error_num)
	{
		case 11:
			fprintf(stderr, "L%d: can't div, stack too short\n", faqu_line_num);
			break;
		case 12:
			fprintf(stderr, "L%d: division by zero\n", faqu_line_num);
			break;
		case 13:
			fprintf(stderr, "L%d: can't mul, stack too short\n", faqu_line_num);
			break;
		case 14:
			fprintf(stderr, "L%d: can't mod, stack too short\n", faqu_line_num);
			break;
		case 15:
			fprintf(stderr, "L%d: can't pchar, stack empty\n", faqu_line_num);
			break;
		case 16:
			fprintf(stderr, "L%d: can't pchar, value out of range\n", faqu_line_num);
			break;
		default:
			return;
	}
	faqu_free_dlistint(faqu_head);
	exit(EXIT_FAILURE);
}
