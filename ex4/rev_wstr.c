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
    int end;
    int k;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    i = ft_strlen(argv[1]) - 1;
    while (i >= 0)
    {
        end = i;
        while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
            i--;
        k = i + 1;
        while (k <= end)
        {
            write(1, &argv[1][k], 1);
            k++;
        }
        i--;
        if (i >= 0)
            write(1, " ", 1);
    }
    write(1, "\n", 1);
    return (0);
}
