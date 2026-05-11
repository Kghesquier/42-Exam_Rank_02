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
    int i;
    int j;
    int k;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    i = ft_strlen(argv[1]);
    while (argv[1][i - 1] != ' ' || argv[1][i - 1] != '\t')
        i--;
    k = i - 1;
    while (argv[1][i])
    {
        write(1, &argv[1][i], 1);
        i++;
    }
}
