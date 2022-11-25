#include <stdio.h>
#include <string.h>
#include<stdlib.h>
char* Tell(char *U)
{
    U = (char *)malloc(100);
    return U;
}
int main()
{
    char *I = NULL;
    I=Tell(I);
    strcpy(I, "I LOVE YOU");
    printf(I);
    free(I);
    I = NULL;
    return 0;
}