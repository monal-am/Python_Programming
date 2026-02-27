#include <stdio.h>
#include <stdlib.h>

struct node {            
    int data;                  
    struct node *next;
};

struct node *head = NULL;

void insert_begin(int value) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

void display() {
    struct node *temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insert_begin(10);
    insert_begin(20);
    insert_begin(30);

    printf("Linked List:\n");
    display();

    return 0;
}     




#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int value) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = top;
    top = newnode;
}

void pop() {
    if(top == NULL) {
        printf("Stack Underflow\n");
        return;
    }
    struct node *temp = top;
    top = top->next;
    free(temp);
}

void display() {
    struct node *temp = top;
    while(temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("Stack Elements:\n");
    display();

    pop();

    printf("After Pop:\n");
    display();

    return 0;
}    






#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(int value) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;

    if(head == NULL) {
        head = newnode;
        newnode->next = head;
    } else {
        struct node *temp = head;
        while(temp->next != head)
            temp = temp->next;

        temp->next = newnode;
        newnode->next = head;
    }
}

void display() {
    if(head == NULL) return;

    struct node *temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while(temp != head);

    printf("(Back to Head)\n");
}

int main() {
    insert(1);
    insert(2);
    insert(3);

    display();

    return 0;
}







#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void insert(int value) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = head;

    if(head != NULL)
        head->prev = newnode;

    head = newnode;
}

void display() {
    struct node *temp = head;
    while(temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);

    display();

    return 0;
}
