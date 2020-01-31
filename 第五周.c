/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//阶乘
//n!=1*2*3*...*n
#include <stdio.h>

int main()
{
    int d;
    int sum=1;
    scanf("%d",&d);
    for(int n=1;n<=d;n++){
        sum*=n;
    }
    printf("%d!=%d",d,sum);
    return 0;
}
