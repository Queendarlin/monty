#include "monty.h"

/**
 * faqu_read_file - For reading the file
 * @faqu_file: file pointer
 *
 */
void faqu_read_file(FILE *faqu_file)
{
	char *faqu_lineprt = NULL;
	size_t faqu_n = 0;
	int faqu_line_num = 1;
	int faqu_flag = 0;

	while (faqu_read_line(&faqu_lineprt, &faqu_n, faqu_file))
	{
		faqu_flag = faqu_split_string(faqu_lineprt, faqu_line_num, faqu_flag);
		faqu_line_num++;
	}
	free(faqu_lineprt);
}
