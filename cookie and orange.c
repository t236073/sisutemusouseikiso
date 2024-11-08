int main()
{
    int k;
    printf("How many cookies?");
    scanf("%d", &k);
    
    int j;
    printf("How many oranges?");
    scanf("%d", &j);
    
    
    if(k >= 300,j >= 300)
    {
        printf("There are many cookies and oranges!!!");
    }  
     
    else if(k >= 300,j <= 300)
    {
        printf("There are many cookies!");
    }
    
    else if(k <= 300,j >= 300)
    {
        printf("There are many oranges!");
    }
    
    else
    {
        printf("There are few cookies and oranges.");
    }
    
    return 0;
}