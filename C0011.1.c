#include <string.h>
#include <stdio.h>
#include <malloc.h>
int main()
{
    char *p = (char *)malloc(100);
    strcpy(p, "nihao");     
    free(p);    //free(p)ֻ�ǽ�ԭ��p��������ڴ�֮��Ĺ�ϵ�������ָ��p��Ȼ������ָ�����һ����ַ��
                //��p!=NULL��p==NULL��˼��ָ�벻ָ���κ��ڴ��е������ַ
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
