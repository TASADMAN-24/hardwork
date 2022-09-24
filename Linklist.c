
//���¡�� .h
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//������ҧ�ç���ҧ�˹�
struct Node {
    int data;
    //�红�����
    struct Node* link; //��ʶҹ���ͧ�˹��Ѵ�

}Node;
void displaylinklist(struct Node* head);
int countNode(struct Node* head);
bool searchNode(struct Node* head );
void addfront( struct Node** head);
void addback( struct Node** head);
void addWithOrder( struct Node** head);

int main(){
    int n;


    //��С�ȵ�������͹���ҧ�˹�
    struct Node *head;//��С�ȵ���� head �� pointer ������ʶҹ���ͧ�˹�
    struct Node *first; //��С�ȵ���� fiest
    struct Node *second; //��С�ȵ���� second
    struct Node *third; //��С�ȵ���� third



    //allocate 3 node in the heap
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));




    //��˹����������˹�

    first->data = 10;
    first->link = NULL;
    second->data = 20;
    second->link = NULL;
    third->data = 30;
    third->link = NULL;


    //��˹������������

    head=first; // ��� pointer head ���价���˹� first
    first->link = second; //��˹�����˹� first ���价���˹� second
    second->link = third;//��˹�����˹� second ���价��˹� third



    addfront(&head);
    addback(&head);
    addWithOrder(&head);

    //���¡�� function displaylinklist �����ʴ���Ң������ list
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
    //��С�� pointer p ��������͹�㹡���ʴ���Ң������ list
    struct Node* p =NULL;
    p = head;//��˹���� pionter p ���价���˹��á ��觪����ѧ�������ǡѺ ��� pointer
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
    //��С�� pointer p ��������͹�㹡���ʴ���Ң������ list
    struct Node* p =NULL;
    p = head;//��˹���� pionter p ���价���˹��á ��觪����ѧ�������ǡѺ ��� pointer


    printf("--------------------\n\n");

    while (p != NULL){
        //�ʴ� data ��˹�
        printf("   [ %d ] ",p->data);
        //����͹ pointer p ��ѧ�˹��Ѵ�
        p = p->link;
    }
    printf("\n");
}

