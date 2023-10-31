int ft_isspace(int c)
{
	if (c == ' ' || (c > 8 && c < 14))
		return (1);
	return (0);
}
