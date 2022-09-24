#include <stdio.h>
void main (){

    FILE *outfile;

    outfile = fopen("out.txt","w");

    fprintf(outfile,"Hello,how are you?");

    fclose(outfile);
}

