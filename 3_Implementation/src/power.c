#include<stdio.h>
#include<math.h>

int power(int a, int b)
{
    int i,ans=1;
     for(i=1;i<=b;i++)
          ans=ans*a;
     return ans;   
}