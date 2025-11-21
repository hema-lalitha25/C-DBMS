/* 15_string_reverse.c
   Reverse a string in-place
*/
#include <stdio.h>
#include <string.h>
int main(void){
    char s[] = "AdityaUniversity";
    int i=0,j=strlen(s)-1;
    while(i<j){ char t=s[i]; s[i]=s[j]; s[j]=t; i++; j--; }
    printf("Reversed: %s\n", s);
    return 0;
}
