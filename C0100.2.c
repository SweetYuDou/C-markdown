#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *Tell(void)
{
    char* u= "I LOVE YOU";
    return u;
}

int main()
{
    char *I = NULL;
    I = Tell();
    printf(I);
    I = NULL;
    return 0;
}
