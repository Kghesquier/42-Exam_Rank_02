#include "ft_list_remove_if.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *current;
    t_list *prev;
    t_list *to_delete;

    if (!begin_list || !*begin_list)
        return ;
    while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
    {
        to_delete = *begin_list;
        *begin_list = (*begin_list)->next;
        free(to_delete);
    }
    if (!*begin_list)
        return ;
    prev = *begin_list;
    current = prev->next;
    while (current)
    {
        if (cmp(current->data, data_ref) == 0)
        {
            prev->next = current->next;
            free(current);
            current = prev->next;
        }
        else
        {
            prev = current;
            current = current->next;
        }
    }
}
