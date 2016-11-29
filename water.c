#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("How many minutes do you shower for? ");
    int minutes = GetInt();
  
    if (minutes>0)
    {
         int bottles = 12*minutes;
        printf ("Your shower uses the equivalent of %i bottles of water!\n", bottles);
    }
    
    else
    {
        printf ("minutes:");
    minutes = GetInt();
    }
}