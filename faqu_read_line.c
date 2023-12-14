#include "monty.h"

/**
 * faqu_read_line - For reading a file line/managing buffer
 * @faqu_lineptr: Double pointer to line buffer
 * @faqu_n: For buffer size
 * @faqu_file: File pointer
 *
 * Return: 1 for reading line successfully, 0 for end of file
 */

int faqu_read_line(char **faqu_lineptr, size_t *faqu_n, FILE *faqu_file)
{
	const int faqu_buffer_size = 128;
	size_t faqu_len;
	char *faqu_new_ptr;

	if (*faqu_lineptr == NULL)
	{
		*faqu_n = faqu_buffer_size;
		*faqu_lineptr = (char *)malloc(faqu_buffer_size * sizeof(char));

		if (*faqu_lineptr == NULL)
		{
			fprintf(stderr, "Memory allocation error\n");
			exit(EXIT_FAILURE);
		}
	}

	if (fgets(*faqu_lineptr, faqu_buffer_size, faqu_file) == NULL)
	{
		return (0);
	}

	faqu_len = strlen(*faqu_lineptr);
	if ((*faqu_lineptr)[faqu_len - 1] == '\n')
	{
		(*faqu_lineptr)[faqu_len - 1] = '\0';
		return (1);
	}

	*faqu_n += faqu_buffer_size - 1;
	faqu_new_ptr = (char *)realloc(*faqu_lineptr, *faqu_n);

	if (*faqu_lineptr == NULL)
	{
		fprintf(stderr, "Memory reallocation error\n");
		exit(EXIT_FAILURE);
	}
	*faqu_lineptr = faqu_new_ptr;

	return (faqu_read_line(faqu_lineptr, faqu_n, faqu_file));
}
