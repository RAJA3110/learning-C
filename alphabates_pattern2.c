#include<stdio.h>
int main()
{
    int i , j  ;
    int n , m ;
    int a='A';
    printf("enter the pattern detail such as row\n");
    scanf("%d", &m );  
    printf("enter the pattern detail such as colunm\n");
    scanf("%d", &n );
    for (i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                printf("%c ",a);
            }
            a=a+1;
           printf("\n");     
        }
    return 0;

}