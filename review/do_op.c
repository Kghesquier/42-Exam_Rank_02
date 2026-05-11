#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int n1;
    int n2;
    int res;

    if (argc == 4)
    {
        n1 = atoi(argv[1]);
        n2 = atoi(argv[3]);
        if (argv[2][0] == '+')
        {
            res = n1 + n2;
        }
        else if (argv[2][0] == '-')
        {
            res = n1 - n2;
        }
        else if (argv[2][0] == '*')
        {
            res = n1 * n2;
        }
        else if (argv[2][0]== '/')
        {
            if (n2 == 0)
            {
                return (0);
            }
            res = n1 / n2;
        }
        else if (argv[2][0] == '%')
        {
            if (n2 == 0)
            {
                return (0);
            }
            res = n1 % n2;
        }
        printf("%d\n", res);
    }
    else
        write(1, "\n", 1);
    return (0);
}
