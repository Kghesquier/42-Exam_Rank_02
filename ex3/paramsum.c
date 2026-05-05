#include <unistd.h>

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
    (void)argv;
    ft_putnbr(argc - 1);
    write(1, "\n", 1);
    return (0);
}
