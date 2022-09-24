#include <stdio.h>
void writefile();
void appendfile ();
void readfile ();

void main(){
    int menu;
    char write;

    printf("Select menu : ");
    scanf("%d",&menu);

    switch (menu){
        case 1:
            writefile();
            break;
        case 2:
            appendfile ();
            break;
        case 3:
            readfile();
            break;
        default :
            printf("Please select a menu.");
            break;

    }

}

void writefile (){
    char write[1000];
    FILE *outfile;

    outfile = fopen("out.txt","w");
    printf("write : ");
    fflush(stdin);
    gets(write);

    fprintf(outfile,write);

    fclose(outfile);
}

void appendfile (){
    char append[1000];
    FILE *outfile;

    outfile = fopen("out.txt","a");
    printf("write > : ");
    fflush(stdin);
    gets(append);

    fprintf(outfile,append,"\n");

    fclose(outfile);

}


void readfile(){

    FILE *outfile;
    char buf[1000];

    outfile = fopen("out.txt","r");
    if(!outfile)
        printf("file not found!");
    while (fgets (buf,1000,outfile)!=NULL)
        printf("%s",buf);


    fclose(outfile);
}
