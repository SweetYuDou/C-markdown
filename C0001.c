#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *A = "I LOVE YOU";
    char *B = NULL;
    int length = strlen(A);
    
    B= (char*)malloc(length+1);

    char* dest=B;
    
    char* src=A;
 
    while(length--!=0){
        *B = *src;
        B++;
        src++;
    }
    *B = '\0';
    printf("%s" ,dest);
    B = dest;
    free(B);
    B= NULL;
    return 0;
}