/**
 *print - prints a string to stdout
 *@string: string to be printed
 *@stream: stream to print out to
 *
 *Return: void, return nothing
 */
void print(char *string, int stream)
{
	int i = 0;

	for (; string[i] != '\0'; i++)
		write(stream, &string[i], 1);
}

/**
 *remove_newline - removes new line from a string
 *@str: string to be used
 *
 *
 *Return: void
 */

void remove_newline(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			break;
		i++;
	}
	str[i] = '\0';
}
/**
 * remove_comment - removes/ignores everything after a '#' char
 * @input: input to be used
 *
 * Return: void
 */
void remove_comment(char *input)
{
	int i = 0;

	if (input[i] == '#')
		input[i] = '\0';
	while (input[i] != '\0')
	{
		if (input[i] == '#' && input[i - 1] == ' ')
			break;
		i++;
	}
	input[i] = '\0';
}

