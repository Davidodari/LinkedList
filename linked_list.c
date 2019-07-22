#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void insert(struct node **head_ref, char *data) {

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

int delete(struct node **head_ref, char *data) {
    if (*head_ref == NULL || data == NULL)
        return -1;
    remove_node(head_ref, find_by_data(*head_ref, data));
    return 0;
}

void remove_node(struct node **list, struct node *node)
{
    struct node *tmp = NULL;
    if (list == NULL || *list == NULL || node == NULL) return;

    if (*list == node) {
        *list = (*list)->next;
        free(node);
        node = NULL;
    } else {
        tmp = *list;
        while (tmp->next && tmp->next != node) tmp = tmp->next;
        if (tmp->next) {
            tmp->next = node->next;
            free(node);
            node = NULL;
        }
    }
}

struct node *find_by_data(struct node *list, void *data) {
    while (list) {
        if (list->data == data) break;
        list = list->next;
    }
    return list;
}

void list(struct node *head) {
    int count = 0;
    while (head != NULL) {
        count++;
        printf("%d %s \n", count, head->data);
        head = head->next;
    }
    printf("\n");
}

