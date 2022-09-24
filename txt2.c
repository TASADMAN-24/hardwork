#include <stdio.h>
void main (){

    FILE *file;
    char buf[1000];

    file = fopen("out.txt","r");
    if  (!file)
        printf("file not found!");
    while (fgets(buf,1000,file)!=NULL)
        printf("%s",buf);

    fclose(file);
}
