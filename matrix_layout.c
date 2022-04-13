#include<stdio.h>
int main()
{
    int i , j  ;
    int n , m ;
    int count;
    printf("enter the pattern detail such as row\n");
    scanf("%d", &m );  
    printf("enter the pattern detail such as colunm\n");
    scanf("%d", &n );
    for (i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                printf("| ",j);
                printf("_ ",j);

            }
            for(j=1;j<=1;j++)
            {
                printf("| ",j);

            }

           printf("\n");     
        }
    return 0;

}