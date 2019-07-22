#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main() {

    struct node *head = NULL;

    add(&head, "X - SCT221-0146/2016");

    add(&head, "D- SCT221-0158/2016");

    add(&head, "Y - SCT221-0177/2016");


    //Display the list
    list(head);

    //Append to end of list
    add(&head, "Z - SCT221-0144/2016");
    list(head);

    return 0;
}