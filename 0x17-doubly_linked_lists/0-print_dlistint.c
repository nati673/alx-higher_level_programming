#include <stdio.h>
#include "your-dlistint-t-structure.h" // Assuming you have a dlistint_t structure defined

size_t print_dlistint(const dlistint_t *h) {
    size_t count = 0;

    while (h != NULL) {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }

    return count;
}
