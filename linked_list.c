//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int number;
    struct Node *next_node;
};
void list_insert(int i, struct Node* head, struct Node* tail){
    struct Node* current = head;
    while (current-> next_node != NULL){
        current = current-> next_node;
    }
    current-> next_node = malloc(sizeof(struct Node));
    current-> next_node-> number = i;
    current-> next_node-> next_node = NULL;
    tail = current-> next_node;
}

void print_list(struct Node* head){
    struct Node* current = head;
    while (current-> next_node != NULL) {
        printf("%d", current->number);
        current = current->next_node;
    }
}
void run_linked_list() {
    printf("Running linked list\n");

    // YOUR CODE HERE
    struct Node* head = NULL;
    //struct Node* torso = NULL;
    struct Node* tail = NULL;

    head = malloc(sizeof(struct Node));
    head->number = 0;
    head->next_node = NULL;

    for (int i = 1; i < 6; i++){
        list_insert(i, head, tail);
    }
    print_list(head);

}

