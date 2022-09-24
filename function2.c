#include <stdio.h>
int factorial ();
void display  (int);

int main() {
    int sum = factorial();
    display(sum);
    return 0;
}
int factorial (){
    int sum = 0;
    int n;

    for (;;)//for(int i=0; i<=n; n++){
        printf("Please enter number type 0 to finish : ");
        scanf("%d",&n);
        if(n == 0){
        break;
        }
        sum += n;
}
    return sum;

void display (int total){
    printf("total is = %d",total);
}
