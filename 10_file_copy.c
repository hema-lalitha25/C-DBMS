/* 10_file_copy.c
   Copy contents of one file to another
*/
#include <stdio.h>
int main(void){
    FILE *in = fopen("input.txt","r");
    FILE *out = fopen("output.txt","w");
    if(!in || !out){ perror("fopen"); return 1; }
    int c;
    while((c=fgetc(in))!=EOF) fputc(c,out);
    fclose(in); fclose(out);
    printf("Copied input.txt to output.txt\n");
    return 0;
}
