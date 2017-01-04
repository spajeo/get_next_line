int	ft_strlen_c_len(char *str, char a, int lenght)
{
	int len;

	while (str[len] != a && str[len] != b && len <= lenght  && str[len])
		len++;
	return (len);
}
