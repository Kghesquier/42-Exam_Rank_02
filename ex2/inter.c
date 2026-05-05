#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j;
    int k;
    int found;
    int duplicate;

    if (argc != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (argv[1][i])
    {
        found = 0;
        duplicate = 0;
        j = 0;
        while (argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
                found = 1;
            j++;
        }
        k = 0;
        while (k < i)
        {
            if (argv[1][k] == argv[1][i])
                duplicate = 1;
            k++;
        }
        if (found && !duplicate)
            write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
