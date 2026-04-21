#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int index = 0;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (argv[1][i])
    {
        if (argv[1][i] > 96 && argv[1][i] < 123)
        {
            index = argv[1][i] - 96;
            while (index > 0)
            {
                write(1, &argv[1][i], 1);
                index--;
            }
        }
        else if (argv[1][i] > 64 && argv[1][i] < 91)
        {
            index = argv[1][i] - 64;
            while (index > 0)
            {
                write(1, &argv[1][i], 1);
                index--;
            }
        }
        else
        {
            write (1, &argv[1][i], 1);
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
