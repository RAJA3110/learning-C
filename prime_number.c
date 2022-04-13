#include<stdio.h>
int main()
{
    int i ;
    int m;
    _Bool isprime=1;
    printf("enter the number\n");
    scanf("%d", &m );  
 
    for (i=2;i<m;i++)
    {
        if(m % i==0)
        {
           isprime =0;
           break; 
        }
    }

    if(isprime==0)
    {
        printf("not a prime number\n");
    }
    else
    {
        printf("prime number\n");
    }
    return 0;

}