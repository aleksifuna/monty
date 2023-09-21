/**
 * char_check - checks if a character is not int nor space
 * @ch: the character to check
 *
 * Return: 0 if so
 */
int char_check(char ch)
{
	int flag1, flag2;

	flag1 = flag2 = 1;
	if (ch > 47 && ch < 58)
		flag1 = 0;
	if (ch == ' ')
		flag2 = 0;
	if (flag1 == 1 && flag2 == 1)
		return (0);
	return (1);
}
