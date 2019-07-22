#ifndef LIST_LINKED_LIST_H
#define LIST_LINKED_LIST_H

struct node {
    char *data;
    struct node *next;
};

/**
 *
 * Takes in new group member data and appends the node to the list
 *
 */
void add(struct node** head_ref,char *data);

/**
 *
 * Remove node pointing to a group member from the list
 *
 */
void delete();

/**
 *
 * Display data in the list
 *
 */
void list(struct node* n);

#endif
