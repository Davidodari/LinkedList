#include <stdio.h>
#include "linked_list.h"

void add(){

}

void delete(){

}

void list(struct node* n){
    int count = 0;
    while (n != NULL) {
        count++;
        printf("%d %s \n",count, n->data);
        n = n->next;
    }
}

