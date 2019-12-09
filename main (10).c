/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int n,sum=0,i,r;
  scanf("%d",&n);
  a:
  while (n!=0)
  {
      r=n%10;
      sum= sum +r;
      n=n/10;
      
  }
  if (sum>9)
  {
    n=sum;
    sum=0;
    goto a;
  }
printf("%d",sum);
}
