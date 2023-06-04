char	*rev_print(char *str)
{
	int i = 0;
	
	while (str[i])
		i++;
	i--;
	
	while (i >= 0)
	{
		write (1, &str[i], 1);
		i--;
	}
	return (str);
}
/* this question has been updated and now asks us to do it as a function rather than a program. */
