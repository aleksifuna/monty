/**
 * check_funct - checks if a char is initial character to opcode
 * @ch: character to be checked
 *
 * Return: 0 if available else 1
 */
int check_funct(char ch)
{
	int i;
	char *initials = "p";

	i = 0;
	while (initials[i] != '\0')
	{
		if (initials[i] == ch)
			return (0);
		i++;
	}
	return (1);
}
