#include<stdio.h>

 void Arrey(int arr[],int p,int a);
int main (){

   int  arr[10];
   int  p;
   int  a;

   Arrey(arr,p,a);
}

void Arrey(int arr[],int p,int a){

   for(int i=0;i<10;i++)
   arr[i]= (i+1)*8;

    printf("Please inter number position :");
   scanf("%d",&p);
    printf("Please inter number data :");
   scanf("%d",&a);

   for (int i=9; i<p;i--)
      arr[i]=arr[i-1];
      arr[p]=a;

   for(int i=0;i<10;i++){
   printf(" Arrey is [%d]  is data %d\n",i,arr[i]);
   }
}

