#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
    int *mid=(int*)malloc(100*sizeof(int));
    *mid = *b;
    *b = *a;
    *a = *mid;
    free(mid);
    mid = NULL;
}
int main(){
    int num1, num2;
    printf("please input the two nums:\n");
    scanf("%d %d", &num1, &num2);
    printf("num1 is %d,num2 is %d\n", num1, num2);
    swap(&num1, &num2);
    printf("num1 is %d,num2 is %d\n", num1, num2);
    return 0;
}
