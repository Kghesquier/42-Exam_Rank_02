#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int size;
    int *res;
    int i;

    if (start <= end)
    {
        size = end - start + 1;
    }
    else
    {
        size = start - end + 1;
    }
    res = malloc(size * sizeof(int));
    if (!res)
        return (NULL);
    i = 0;
    if (start < end)
    {
        while (start <= end)
        {
            res[i] = end;
            end--;
            i++;
        }
    }
    else
    {
        while (start >= end)
        {
            res[i] = end;
            end++;
            i++;
        }
    }
    return (res);
}
