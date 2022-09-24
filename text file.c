#include <stdio.h>
void main (){

    FILE *outfile;

    outfile = fopen("out.txt","a");

    fprintf(outfile,"\nHello,how are you?");

    fclose(outfile);
}
