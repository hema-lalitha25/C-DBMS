/* 18_palindrome_string.c
   Check if a string is palindrome (case-sensitive)
*/
#include <stdio.h>
#include <string.h>
int main(void){
    char s[] = "radar";
    int i=0, j=strlen(s)-1; int ok=1;
    while(i<j) if(s[i++]!=s[j--]) { ok=0; break; }
    printf("%s is %s\n", s, ok? "palindrome":"not palindrome");
    return 0;
}
