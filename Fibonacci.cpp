#include<stdio.h>
int main()
{
    int i, a=0, b=1, c=a+b,n;
    
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    
    for(i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    
    return 0;
}
