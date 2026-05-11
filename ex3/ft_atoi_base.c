int char_to_value(char c)
{
    if (c >= '0' &&c <= '9')
        return (c - '0');
    if (c >= 'a' && c <= 'f')
        return (c - 'a' + 10);
    if (c >= 'A' && c <= 'F')
        return (c - 'A' + 10);
    return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int nb = 0;
    int value;

    if (str[0] == '-')
    {
        sign = -1;
        i = 1;
    }
    while (str[i])
    {
        value = char_to_value(str[i]);
        if (value == -1 || value >= str_base)
            break;
        nb = nb * str_base + value;
        i++;
    }
    return (nb * sign);
}
