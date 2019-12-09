/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i=1;
    a:
    printf("%d",i);
    i++;
    if(i<=10)
    goto a;
    return 0;

}
