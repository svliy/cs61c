#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head)
{
    /* TODO: Implement ll_has_cycle */

    if (head == NULL)
        return 0;

    node *fast_ptr = head;
    node *slow_ptr = head;

    if (fast_ptr->next && fast_ptr->next->next)
        fast_ptr = fast_ptr->next->next;
    slow_ptr = slow_ptr->next;

    while (fast_ptr != slow_ptr)
    {
        if (fast_ptr->next && fast_ptr->next->next)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        else
            return 0;
    }
    // 0 is false, 1 is true
    return fast_ptr == slow_ptr;
}
