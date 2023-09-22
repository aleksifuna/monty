/**
 * int_check - checks if a character is not int nor space
 * @ch: the character to check
 *
 * Return: 0 if so
 */
int int_check(char ch)
{
	int flag1;

	flag1 = 0;
	if (ch > 47 && ch < 58)
		flag1 = 1;
	else if (ch == '-')
		flag1 = 1;
	if (flag1 == 1)
		return (0);
	return (1);
}
