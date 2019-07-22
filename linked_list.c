#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void add(struct node **head_ref, char *data) {

    struct node *new_node = (struct node *) malloc(sizeof(struct node));

    struct node *last = *head_ref;

    new_node->data = data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
}

void delete() {

}

void list(struct node *n) {
    int count = 0;
    while (n != NULL) {
        count++;
        printf("%d %s \n", count, n->data);
        n = n->next;
    }
    printf("\n");
}

