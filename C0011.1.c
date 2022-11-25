#include <string.h>
#include <stdio.h>
#include <malloc.h>
int main()
{
    char *p = (char *)malloc(100);
    strcpy(p, "nihao");     
    free(p);    //free(p)只是将原本p与申请的内存之间的关系清除，但指针p依然存在且指向随机一个地址，
                //故p!=NULL。p==NULL意思是指针不指向任何内存中的任意地址
    if (p != NULL){       
        strcpy(p, "shijie");
        }
    int i;
    for (i = 0; i < 6; i++){
        printf("%c", *(p + i));
    }
    printf("\n");
    p = NULL;
    return 0;
}
