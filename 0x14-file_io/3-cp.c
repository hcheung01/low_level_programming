#include "coding.h"

/**
 * main - function with two arguments
 * @argc: count of arguments
 * @argv: variadic arguments
 *
 * Description: copies the content of a file to another file
 * Return: 0 for success and exit codes for failure
 */
int main(int argc, char *argv[])
{
	int to = 0, from = 0, to_count = 0;
	char buffer[1024];
	int from_count = 1024;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
			"Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from == 1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == 1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (from_count == 1024)
	{
		from_count = read(from, buffer, 1024);
		if (from_count == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		to_count = write(to, buffer, from_count);
		if (to_count == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(from)  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}

	return (0);
}
