#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //cashowedf is the float coming from user input. 
    float cash_owedf = 0;
    
    do
    {
        printf("How much change is owed?");
        cash_owedf = GetFloat();
    }
    while(cash_owedf<0);
   
    cash_owedf=(cash_owedf*100);
   
    int cents_owed;
   
    //Following code rounds to nearest int. 
    cents_owed=cash_owedf+0.5;
    
    //Coin Values.
    int Quarter_Value=25;
    int Dime_Value=10;
    int Nickel_Value=5;
    int Penny_Value=1;
   
    
    //Values to be counted. 
    int Coins_Used=0;
    
    //Quarters
    for(true;cents_owed>=Quarter_Value;cents_owed=cents_owed-25)
    {
        Coins_Used=Coins_Used+1;
    }
   
    //Dimes
    for(true;cents_owed>=Dime_Value;cents_owed=cents_owed-10)
    {
        Coins_Used=Coins_Used+1;
    }
   
    //Nickels
    for(true;cents_owed>=Nickel_Value;cents_owed=cents_owed-5)
    {
        Coins_Used=Coins_Used+1;
    }
    
    //Pennies
    for(true;cents_owed>=Penny_Value;cents_owed=cents_owed-1)
    {
        Coins_Used=Coins_Used+1;
    }

    //Print the number of coins. 
    printf("%i\n", Coins_Used);

}