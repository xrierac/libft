char	*ft_strdup(const char *s)
{
	char	*str;
	int	i;

	i = 0;
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (0);
	while (*s)
	{
		str[i];
		i++;
		s++;
	}
	str[i] = '\0';
	return (str);
}
