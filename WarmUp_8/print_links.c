#include <stdio.h>
#include <stdlib.h>

//node structure
struct Node {
    int data;
    struct Node *next;
};

//function prototypes
struct Node *head = NULL;

void push(int new_data) {
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node -> data = new_data;
    new_node -> next = head;
    head = new_node;
}

void delete(int key) {
    struct Node *temp = head, *prev = NULL;

    if(temp != NULL && temp -> data == key) {
        head = temp -> next;
        free(temp);
        return;
    }
    while(temp != NULL && temp -> data != key) {
        prev = temp;
        temp = temp-> next;
    }
    if (temp == NULL) {
        return;
    }
    prev -> next = temp -> next;
    free(temp);
}

void printList() {
    struct Node *tnode = head;
    while (tnode != NULL) {
        printf("%d ", tnode -> data);
        tnode = tnode -> next;
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    head = NULL;

    push(7);
    push(1);
    push(3);
    push(2);

    printf("\nCreated linked list is: \n");
    printList();
    delete(1);
    printf("\nLinked list after deletion of 1: \n");
    printList();
    return EXIT_SUCCESS;
}