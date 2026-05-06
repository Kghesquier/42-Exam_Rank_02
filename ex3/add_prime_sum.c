#include <unistd.h>

int ft_atoi(char *str)
{
    int nb= 0;
    int i = 0;
    int sign = 1;

    while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
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

int ft_is_prime(int i)
{
    if (i % 1 == 0 && i % i == 0)
    {
    }
}
