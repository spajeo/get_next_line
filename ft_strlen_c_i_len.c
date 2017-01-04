
int	ft_strlen_c_i_len(char *str, char a, int i, int lenght)
{
	int len;
	
	len  = 0;
	while (str[i + len] != a && str[len + i] && i <= lenght)
		len++;
	return (i + len);
}
