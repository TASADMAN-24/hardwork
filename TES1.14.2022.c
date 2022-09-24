void insertArray(int *Thaksin,int *Thaksin1, int p, int data);
void displayArray(int *Thaksin);

void main(){

    int arr[10];
    int *ptr =&arr[0];
    int *ptr1 =&arr[9];
    int p;
    int data;

    insertArray(ptr,ptr1, p, data);
}

void insertArray(int *ptr,int *ptr1, int p, int data){

    int *ptr2;
    int *ptr3;
    ptr2=ptr;
    ptr3=ptr1;

    for (int i= 0; i<10; i++){
        *ptr=(i+1)*8;
        *ptr++;
    }
    displayArray(ptr2);

    printf("\n-----------------------------\n");
    printf("Insert Position : ");
    scanf("%d",&p);

    printf("Insert data : ");
    scanf("%d",&data);
    printf("\n-----------------------------\n");


    for (int i= 9; i>=p; i--){
        *ptr1 = *ptr3;

        *ptr3--;
        *ptr1--;
    }
    ptr1++;
    *ptr1=data;
    displayArray(ptr2);
}

void displayArray(int *Thaksin){


    for (int i= 0; i<10; i++){
        printf("address of data[%d] is %d \n",i, *Thaksin);
        Thaksin++;

    }

}
