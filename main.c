#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main() {

    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    //Allocate Memory
    head = (struct node *) malloc(sizeof(struct node));
    second = (struct node *) malloc(sizeof(struct node));
    third = (struct node *) malloc(sizeof(struct node));

    head->data = "David Odari - SCT221-0146/2016";
    head->next = second;

    second->data = "Langat Kipkirui - SCT221-0158/2016";
    second->next = third;

    third->data = "Maureen Wakagwi - SCT221-0177/2016";
    third->next = NULL;

    //Display the list
    list(head);

    //Append to end of list
    add(&head,"Kamula Isaac - SCT221-0144/2016");
    list(head);

    return 0;
}