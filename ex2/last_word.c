#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
    {
        i++;
    }
    return (i);
}

int main(int argc, char **argv)
{
    int i = 0;

    if (argc != 2 || ft_strlen(argv[1]) == 0)
    {
        write(1, "\n", 1);
        return(0);
    }

    i = ft_strlen(argv[1]) - 1;
    while ((argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13)) && i != 0)
        i--;
    while ((argv[1][i] != 32 && !(argv[1][i] >= 9 && argv[1][i] <= 13)) && i != 0)
        i--;
    if (argv[1][i] == ' ' || (argv[1][i] >= 9 && argv[1][i] <= 13))
        i++;
    while (argv[1][i] && (argv[1][i] != 32 && !(argv[1][i] >= 9 && argv[1][i] <= 13)))
    {
        write (1, &argv[1][i], 1);
        i++;
    }
    write (1, "\n", 1);
    return (0);
}
