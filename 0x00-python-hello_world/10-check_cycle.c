#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 * If there is cycle - 1.
 */
int check_cycle(listint_s *list)
{
listint_s *slow, *fast;
if (list == NULL || list->next == NULL)
return (0);
slow = list->next;
fast = list->next->next;
while (slow && fast && fast->next)
{
if (slow == fast)
return (1);
slow = slow->next;
fast = fast->next->next;
}
return (0);
}
