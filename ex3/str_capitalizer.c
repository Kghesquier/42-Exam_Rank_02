#include <unistd.h>

int main(int argc, char **argv)
{
    int j = 1;
    int i;

    if (argc < 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (argv[j])
    {
        i = 0;
        while (argv[j][i])
        {
            if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
            {
                if (i == 0 || argv[j][i - 1] == ' ' || argv[j][i - 1] == '\t')
                    argv[j][i] -= 32;
            }
            else if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
            {
                if (i != 0 && argv[j][i - 1] != ' ' && argv[j][i - 1] != '\t')
                    argv[j][i] += 32;
            }
            write(1, &argv[j][i], 1);
            i++;
        }
        write(1, "\n", 1);
        j++;
    }
    return (0);
}
