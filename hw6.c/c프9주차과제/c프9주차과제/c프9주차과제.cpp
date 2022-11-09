#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int even(int a);
int odd(int a);


int even(int a)
{
    if (a % 2 == 0)                 
        printf("%d", a);        
    return 0;
}

int odd(int a)                 
{
    if (a % 2 == 1)                 
        printf("%d", a);        
    return 0;
}


int main()                    
{
    int i;                    
    int a[10] = { 0 };            

    printf("Please input five integers: ");      

    for (i = 0; i < 5; i++)                
    {
        scanf("%d", &a[i]);             
    }


    printf("Even numbers:");
    printf("");
    for (i = 0; i < 5; i++)
    {
        odd(a[i]);  
        printf(" ");
    }

    printf("Odd numbers:");   
    printf("");
    for (i = 0; i < 5; i++)               
    {
        even(a[i]);   
        printf(" ");
    }

   


}