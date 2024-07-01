int ft_atoi(const char *str)
{
    int sign;
    long res;
    int i;

    sign = 1;
    i = 0;
    res = 0;
    while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-' )
            sign = -1;
        i++;
    }
    while (str[i])
    {
        res = res * 10 + (str[i]  - '0');
        i++;
    }
    res *= sign;
    return ((int)res);
}