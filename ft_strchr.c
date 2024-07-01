char* strchr(const char* str, int c)
{
	while (*str && *str != c)
		str++;
	if (!*str)
		return (0);
	return ((char *)str);
}