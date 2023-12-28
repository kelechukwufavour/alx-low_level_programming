#include <stdio.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    if (list == NULL)
        return NULL;

    skiplist_t *current = list, *express = NULL;

    while (current)
    {
        express = current->express;
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

        if (express == NULL || express->n >= value)
        {
            printf("Value found between indexes [%lu] and [%lu]\n",
                   current->index, express ? express->index : current->index);

            while (current)
            {
                printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
                if (current->n == value)
                    return current;
                current = current->next;
            }
            break;
        }
        current = express;
    }

    return NULL;
}
