#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node{
 char data;
 struct Node* link;

};

void push(struct Node** head,char data);
void display(struct Node* head);

void main(){

    struct Node* head;
    head = NULL;

    char str[100];
    printf("Reverse character\n");
    printf("---------------\n");
    printf(" Input word: ");
    fgets(str, sizeof(str),stdin);

    int count = strlen(str);

    for(int i=0; i<count; i++){
        push(&head,str[i-1]);
    }
    printf( "\nresult of reverse character is\n");
    printf("\n");
    printf("---------------\n");
    printf("\"");
    display(head);

    printf("\"\n");
}



void push(struct Node** head,char data){
struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));

    newnode->data = data;
    newnode->link = *head;
    *head = newnode;

}


void display(struct Node* head){
 struct Node* p = head;

    while(p->link != NULL){
        printf("%c",p->data);
        p = p->link;
    }


}
