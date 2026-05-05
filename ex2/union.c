#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int k;
    int l;
    int dup;

    if (argc != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (argv[1][i])
    {
        dup = 0;
        k = 0;
        while (k < i)
        {
            if (argv[1][k] == argv[1][i])
                dup = 1;
            k++;
        }
        if (!dup)
            write(1, &argv[1][i], 1);
        i++;
    }
    while (argv[2][j])
    {
        dup = 0;
        k = 0;
        l = 0;
        while (k < i)
        {
            if (argv[1][k] == argv[2][j])
                dup = 1;
            k++;
        }
        while (l < j)
        {
            if (argv[2][l] == argv[2][j])
                dup = 1;
            l++;
        }
        if (!dup)
            write(1, &argv[2][j], 1);
        j++;
    }
    write(1, "\n", 1);
    return (0);
}
