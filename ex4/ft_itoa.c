#include <stdlib.h>

int count_digits(long n)
{
    int count = 0;

    if (n <= 0)
        count = 1;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return (count);
}

char	*ft_itoa(int nbr)
{
    long n;
    int len;
    char *str;

    n = nbr;
    len = count_digits(n);
    str = malloc(len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (n == 0)
        str[0] = '0';
    if (n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    while (n > 0)
    {
        len--;
        str[len] = (n % 10) + '0';
        n /= 10;
    }
    return (str);
}
