#include <unistd.h>

int ft_atoi(char *str)
{
    int nb= 0;
    int i = 0;
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
    char res;
    if (i >= 10)
        ft_putnbr(i / 10);
    res = (i % 10 + '0');
    write(1, &res, 1);
}

int ft_is_prime(int i)
{
    int nb = 2;
    if (i < 2)
        return (0);
    while (nb < i)
    {
        if (i % nb == 0)
            return (0);
        nb++;
    }
    return (1);
}

int main(int argc, char ** argv)
{
    int i = 0;
    int n;
    int sum = 0;

    if (argc != 2 || ft_atoi(argv[1]) <= 0)
    {
        write(1, "0\n", 2);
        return (0);
    }
    n = ft_atoi(argv[1]);
    while (i <= n)
    {
        if (ft_is_prime(i))
            sum += i;
        i++;
    }
    ft_putnbr(sum);
    write(1, "\n", 1);
    return (0);
}
