
//เรียกใช้ .h
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//การสร้างโครงสร้างโหนด
struct Node {
    int data;
    //เก็บข้อมูล
    struct Node* link; //เก็บสถานที่ของโหนดถัดไป

}Node;
void displaylinklist(struct Node* head);
int countNode(struct Node* head);
bool searchNode(struct Node* head );
void addfront( struct Node** head);
void addback( struct Node** head);
void addWithOrder( struct Node** head);

int main(){
    int n;


    //ประกาศตัวแปลเพื่อนสร้างโหนด
    struct Node *head;//ประกาศตัวแปล head เป็น pointer เพื่อเก็บสถานที่ของโหนด
    struct Node *first; //ประกาศตัวแปล fiest
    struct Node *second; //ประกาศตัวแปล second
    struct Node *third; //ประกาศตัวแปล third



    //allocate 3 node in the heap
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));




    //กำหนดค่าให้แก่โหนด

    first->data = 10;
    first->link = NULL;
    second->data = 20;
    second->link = NULL;
    third->data = 30;
    third->link = NULL;


    //กำหนดการเชื่อมต่อ

    head=first; // ให้ pointer head ชี้ไปที่โหนด first
    first->link = second; //กำหนดให้โหนด first ชี้ไปที่โหนด second
    second->link = third;//กำหนดให้โหนด second ชี้ไปทีโหนด third



    addfront(&head);
    addback(&head);
    addWithOrder(&head);

    //เรียกใช้ function displaylinklist เพื่อแสดงค่าข้อมูลใน list
    displaylinklist(head);

    printf(" \n\nCount Node is %d:",countNode(head));
    if (searchNode(head)){
        printf("\nFound Data...\n");
    }
    else {printf("NOT Found...\n");

    }

}
void addfront( struct Node** head){
    struct  Node* p=(struct Node*)malloc(sizeof(struct Node));
     int x;
     printf("Please insert new data aadfront: ");
     scanf("%d",&x);
    p->data = x;
    p->link = *head;
    *head = p;

}

void addback( struct Node** head){
    struct  Node* N =(struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
     int c;
     printf("---------------\n");
     printf("Please insert new data aadback: ");
     scanf("%d",&c);
     N->data = c;

    N->link = NULL;

    if  (*head == NULL){
        N->link = *head;
        *head = N;
    }
    else{

      while(p->link != NULL){
        p = p->link;
      }
      p->link =N;
    }
}

void addWithOrder( struct Node** head){
   struct  Node* L =(struct Node*)malloc(sizeof(struct Node));
   struct Node* tm;
   int e;
    printf("---------------\n");
    printf("Please insert new data addWithOrder: ");
    scanf("%d",&e);

     L->data = e;

    if ((*head) == NULL || L->data <= (*head)->data){
        L->link = *head;
        *head = L;
    }else{
        tm = *head;

    while (tm->link != NULL && tm->link->data <= L->data){
        tm = tm->link;
     }
    L->link = tm->link;
    tm->link = L;

    }


}


int countNode(struct Node* head){
    //ประกาศ pointer p เพื่อเลื่อนไปในการแสดงค่าข้อมูลใน list
    struct Node* p =NULL;
    p = head;//กำหนดให้ pionter p ขี้ไปที่โหนดแรก ซึ่งชี้ไปยังที่เกี่ยวกับ ที่ pointer
    int n = 0;
    while (p != NULL){
            n++;
        p = p->link;
        printf("  Count%d  ",n);
    }
    return n;

}

bool searchNode(struct Node* head ){
    struct  Node *p;
    bool found = false;
    int key = 0;


    printf("\nEnter Data to be search :");
    scanf("%d",&key);

    p=head;

    while ((p != NULL)&&(found == false)){
        if (p->data == key)
            found = true;

        p = p->link;

    }
    return found;
}

void displaylinklist(struct Node* head ){
    //ประกาศ pointer p เพื่อเลื่อนไปในการแสดงค่าข้อมูลใน list
    struct Node* p =NULL;
    p = head;//กำหนดให้ pionter p ขี้ไปที่โหนดแรก ซึ่งชี้ไปยังที่เกี่ยวกับ ที่ pointer


    printf("--------------------\n\n");

    while (p != NULL){
        //แสดง data ในโหนด
        printf("   [ %d ] ",p->data);
        //เลื่อน pointer p ไปยังโหนดถัดไป
        p = p->link;
    }
    printf("\n");
}

