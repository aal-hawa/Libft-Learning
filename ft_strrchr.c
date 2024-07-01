char* strrchr(const char* str, int c)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++
		i++;
	}
	while (*str != c && i >= 0)
	{
		str--;
		i--;
	}
	if (*str != c)
		return (0);
	return ((char *)str);
}