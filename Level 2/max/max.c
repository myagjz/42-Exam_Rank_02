int	max(int* tab, unsigned int len)
{
	if (len == 0)
		return (0);
	
	unsigned int i = 0;
	int s = tab[0];

	while (i < len)
	{
		if (s < tab[i])
			s = tab[i];
		i++;
	}
	return (s);
}
