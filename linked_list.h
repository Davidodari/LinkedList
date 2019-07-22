#ifndef LIST_LINKED_LIST_H
#define LIST_LINKED_LIST_H

//TODO Improve docs

struct node {
    char *data;
    struct node *next;
};

/**
 *
 * Takes in new group member data and appends the node to the list
 *
 * @param head_ref
 * @param data
 *
 */
void insert(struct node **head_ref, char *data);

/**
 *
 * Remove node pointing to a group member from the list
 *
 * @param head_ref
 * @param data
 * @return int status code if deletion was successful or not
 */
int delete(struct node **head_ref, char *data);

/**
 *
 * Display data in the list
 *
 * @param head
 *
 */
void list(struct node *head);

/**
 *
 * Finds an element in the linked list
 *
 *@param list
 *@param data
 *
 */
struct node *find_by_data(struct node *list, void *data);

/**
 * Removes a node from the list and frees up memory
 *
 * @param list
 * @param node
 */
void remove_node(struct node **list, struct node *node);

#endif
