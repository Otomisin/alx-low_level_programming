#ifndef SORTING_ALGOS_H
#define SORTING_ALGOS_H

#include <stddef.h>

/* Data structures */

/**
 * struct listint_s - singly linked list
 * @n: integer stored in node
 * @next: pointer to next node in list
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - skip list
 * @n: integer stored in node
 * @express: pointer to the next node in the express lane
 * @next: pointer to the next node
 *
 * Description: singly linked list with an express lane node structure
 */
typedef struct skiplist_s
{
    int n;
    struct skiplist_s *express;
    struct skiplist_s *next;
} skiplist_t;

/* Functions */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SORTING_ALGOS_H */
