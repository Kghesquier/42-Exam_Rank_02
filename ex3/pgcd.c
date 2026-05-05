#include <stdio.h>

int ft_atoi(const char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res * sign);
}

int main(int argc, char **argv)
{
    int a;
    int b;
    int i;

    if (argc != 3)
    {
        printf("\n");
        return (0);
    }
    a = ft_atoi(argv[1]);
    b = ft_atoi(argv[2]);
    if (a > b)
        i = b;
    else
        i = a;
    while (i > 0)
    {
        if (a % i == 0 && b % i == 0)
        {
            printf("%d\n", i);
            return (0);
        }
        i--;
    }
    return (0);
}
