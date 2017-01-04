
int	ft_strlen_c_i(char *str, char a, int i)
{
	int len;

	len = 0;
	while (str[i + len] != a  && str[i + len])
		len++;
	return (i + len);
}
