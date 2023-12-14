#include "monty.h"

/**
 * faqu_split_string - For separating lines for function to use
 * @faqu_lineptr: For the line of string in a file.
 * @faqu_line_num: For opcode Line number
 * @faqu_flag: For checking if it is a stack or queue
 *
 * Return: 0 showing its a stack or 1 showing its a queue
 */
int faqu_split_string(char *faqu_lineptr, int faqu_line_num, int faqu_flag)
{
	char *faqu_delim;
	char *faqu_opcode;
	char *faqu_value;

	faqu_delim = "\n ";
	faqu_opcode = strtok(faqu_lineptr, faqu_delim);
	faqu_value = strtok(NULL, faqu_delim);

	if (faqu_opcode != NULL)
	{
		if (faqu_opcode[0] == '#')
			return (faqu_flag);
		if (strcmp(faqu_opcode, "stack") == 0)
		{
			faqu_flag = 0;
			return (faqu_flag);
		}
		if (strcmp(faqu_opcode, "queue") == 0)
		{
			faqu_flag = 1;
			return (faqu_flag);
		}
		faqu_opcode_func(faqu_value, faqu_opcode, faqu_line_num, faqu_flag);
	}
	return (faqu_flag);
}
