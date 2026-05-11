#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int nb = 0;
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
        nb = (nb * 10) + (str[i] - '0');
        i++;
    }
    return (nb * sign);
}
void print_hex(int n)
{
    char *hex = "0123456789abcdef";
    char c;

    if (n >= 16)
        print_hex(n / 16);
    c = hex[n % 16];
    write(1, &c, 1);
}
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    print_hex(ft_atoi(argv[1]));
    write(1, "\n", 1);
    return (0);
}
