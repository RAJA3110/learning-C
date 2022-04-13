#include<stdio.h>
int main()
{
    int i =1 , a=0 , b=1 ;
    int n;
    int sum ; 
    printf("enter the nmuber for the series\n");
    scanf("%d", &n );  
    printf("%d  %d", a,b);
    for (i; i<=n;i++)
    {
        sum= a+b;
        a=b;
        b=sum;
        printf(" %d", sum);
    }

    return 0 ;

}