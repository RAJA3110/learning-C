#include<stdio.h>
int main()
{
    int i =1 , j=1  ;
    int n  ;
    int space;
    printf("enter the pattern detail such as row\n");
    scanf("%d", &n );  

    while (i<=n)
    {
        space=n-i;
        while (space)
        {
            printf(" ");
            space=space-1;
        }
        
        while (j<=i)
        {
            printf("* ",j);
            j=j+1;
        }
        
    
        int start =i-1;
        while (start)
        {
            printf("* ",start);
            start=start-1;
        }
        

        printf("\n");
        i=i+1;
    
    }
    
    return 0 ;

}
   