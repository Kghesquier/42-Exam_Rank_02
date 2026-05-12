#include <unistd.h>
#include <stdlib.h>

void    ft_putnbr(int i)
{
    char c;
    if (i >= 10)
        ft_putnbr(i / 10);
    c = (i % 10 + '0');
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;
    int divisor;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    i = atoi(argv[1]);
    if (i < 1)
    {
        write(1, "\n", 1);
        return (0);
    }
    if (i == 1)
    {
        write(1, "1\n", 2);
        return (0);
    }
    divisor = 2;
    while (divisor * divisor <= i)
    {
        while (i % divisor == 0)
        {
            ft_putnbr(divisor);
            i = i / divisor;
            if (i > 1)
                write(1, "*", 1);
        }
        divisor++;
    }
    if (i > 1)
        ft_putnbr(i);
    write(1, "\n", 1);
    return (0);
}
