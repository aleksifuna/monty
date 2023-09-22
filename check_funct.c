/**
 * check_funct - checks if a char is initial character to opcode
 * @ch: character to be checked
 *
 * Return: 0 if available else 1
 */
int check_funct(char ch)
{
	int f1;

	f1 = 0;

	if (ch > 64 && ch < 91)
		f1 = 1;
	else if (ch > 96 && ch < 123)
		f1 = 1;
	if (f1 == 1)
		return (0);
	return (1);
}
