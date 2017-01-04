int	ft_strlen_c(char *str, char a)
{
	int len;

	len = 0;
	while (str[len] != a && str[len])
		len++;
	return (len);
}
