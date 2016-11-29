#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height=0;
    
    do
    {
        printf("Please enter the required height:");
        height=GetInt();
    }
    
    while (height<0 || height>23);
    
    int row_n=0;
   
    for(row_n=0; row_n<height; row_n=row_n+1)
    {
        for(int space=0; space<height-row_n-1; space=space+1)
        {
            printf(" ");
        }
        
         for(int hash=0; hash<row_n+2; hash=hash+1)
        {
            printf("#");
            
        }
        printf("\n");
    }
    
}
