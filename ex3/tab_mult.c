#include <unistd.h>

int ft_atoi(const char * str)
{
    int i = 0;
    int nb = 0;
    int sign = 1;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = (nb * 10) + (str[i] - '0');
        i++;
    }
    return (nb * sign);
}
void    ft_putnbr(int i)
{
    char digit;
    if (i >= 10)
        ft_putnbr(i / 10);
    digit = (i % 10 + '0');
    write(1, &digit, 1);
}
int main(int argc, char **argv)
{
    int j = 1;
    int tmp = 0;
    int res;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    tmp = ft_atoi(argv[1]);
    while (j < 10)
    {
        res = 0;
        ft_putnbr(j);
        write(1, " x ", 3);
        ft_putnbr(tmp);
        write(1, " = ", 3);
        res = tmp * j;
        ft_putnbr(res);
        write(1, "\n", 1);
        j++;
    }
    return (0);
}
