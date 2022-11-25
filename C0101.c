#include <stdio.h>
#include <string.h>
#include <malloc.h>
 
struct BOOK
{
   char* name;
   int number;
};
char* func()
{
    char* p = "C primier plus";   
    return p;  
}
void del(char* p)
{
    printf("%s\n",p);
    free(p);    
}
 
int main()
{
    struct BOOK s; 
    char* p = func();  
    int i;
    char* p1 = (char*)malloc(50*sizeof(char));
    char* dest = p1;
    for(i = 0;i < 40;i++)      
    {
        *(p1+i) = 40 - i;   
    }
    p1 = dest;

    char* p2 = "12345678";
    char* src = p2;
    for(i = 0;i < 40;i++)
    {
        if(i % 9 !=0){
        *p1= *p2;
        p1++;
        p2++;
        }
        else{
            p2 = src;
        }        
    }
    
    
    
    s.name = (char*)malloc(10*sizeof(char));   
    strcpy(s.name,p);   
    s.number = 99;
    
    p = (char*)malloc(20);   
    strcpy(p,"C and pointer"); 
    del(p);

    p1 = dest;
    free(p1);

    return 0;
}
