#include <stdio.h>

int main()
{
    int k;
    printf("How many cookies?");
    scanf("%d", &k);
    
    if(k >= 300)
    {
        printf("There are many cookies!!!");
    }  
    
    else
    {
        printf("There are few cookies.");
    }


    return 0;
}
