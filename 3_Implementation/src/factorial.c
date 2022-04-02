#include<stdio.h>
int factorial(int x)
{
    int i,fact=1;
  
    if (x<0) //checking for negative value
    {
        printf("\nPlease enter a positive number :");
        return 0;
    } 

    for(i=1;i<=x;i++)
        fact=fact*i;

    return fact; //return answer to main funtion 
}
