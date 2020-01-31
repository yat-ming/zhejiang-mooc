/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//阶乘
//n!=1*2*3*...*n
//1.for
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
//2.while
#include <stdio.h>

int main()
{
    int d;
    int i=1;
    int sum=1;
    scanf("%d",&d);
   while(i<=d){
       sum*=i;
       i++;
   }
   printf("%d!=%d",d,sum);
    return 0;
}

//奇偶数
int main()
{
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       if(i%2==0){
           printf("%d为偶数 ",i);
       }
       else{
           printf("%d为奇数 ",i);
       }
   }
    return 0;
}

//素数
include <stdio.h>

int main()
{
    int d;
    scanf("%d",&d);
    for(int i=1;i<=d;i++){
        int n;
        int prime=1;
        for(n=2;n<i;n++){
            if(i%n==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            printf("%d",i);
        }
    }
    return 0;
}
