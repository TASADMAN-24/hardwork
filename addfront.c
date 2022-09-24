#include<stdio.h>
#include<stdlib.h>

struct Node{

    int data;
    struct Node* link ;
};

void displaylinklist (struct Node* head);
void addfront(struct Node** head);
void Tail(struct Node** head);
void addWithOrder(struct Node** head);







void main(){

 struct Node*  head;
 struct Node*  frist;
 struct Node*  second;
 struct Node*  thrid;


    frist = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    thrid = (struct Node*)malloc (sizeof(struct Node));

    frist->data = 10;
    frist->link = NULL;
    second->data = 20;
    second->link = NULL;
    thrid->data = 30;
    thrid->link = NULL;

    head = frist;
    frist->link = second;
    second->link = thrid;


    addfront(&head);
    Tail(&head);
    addWithOrder(&head);
    displaylinklist(head);


}

void addfront(struct Node** head){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    int num;
    printf("Please insert data addfront: ");
    scanf("%d",&num);

    newnode->data = num;

    newnode->link = *head;
    *head = newnode;

}
void Tail(struct Node** head){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = *head;
    struct Node* last;


    int num;
    printf("\nPlease insert data Tail: ");
    scanf("%d",&num);

    newnode->data = num;
    newnode->link = NULL;

        if(*head == NULL){
            (*head)->link = newnode;
        }
        else{


            while(p->link != NULL){

                p = p->link;
                last = p;

            }
               last->link = newnode;
        }

}
void addWithOrder(struct Node** head){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = *head;

    int num;
    printf("\nPlease insert data addWithOrder: ");
    scanf("%d",&num);

    newnode->data=num;
    newnode->link = NULL;

    if(*head == NULL ||(*head)->data >= newnode->data){

        newnode->link = *head;
        *head = newnode;
        }
    else {
        while(p->link != NULL && p->link->data <= newnode->data){
            p = p->link;
        }
        newnode->link = p->link;
        p->link = newnode;
    }

}

void displaylinklist (struct Node* head){

 struct Node* p =  head;
     printf("  ---------------------------------  \n");
 while (p != NULL){
     printf(" [%d] ",p->data);
     p = p->link;
  }
  printf("\n");
}
