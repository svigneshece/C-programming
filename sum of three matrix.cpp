#include<stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3],d[3][3],r1, c1,r2,c2,r3,c3,i, j;
    
    printf("Enter the size of matrix 1:");
    scanf("%d%d",&r1,&c1);
    
    printf("Enter the size of matrix 2:");
    scanf("%d%d",&r2,&c2);
    
    printf("Enter the size of matrix 3:");
    scanf("%d%d",&r3,&c3);

    if(r1==c1 && r2==c2)
    {
        printf("Enter the elements in Matrix 1\n");
        
        // getting matrix 1 input
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        // getting matrix 2 input
        
        printf("Enter the elements in Matrix 2\n");
        
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("Enter the elements in Matrix 3\n");
        for(i=0;i<r3;i++)
        {
            for(j=0;j<c3;j++)
            {
                scanf("%d",&c[i][j]);
            }
        }
        // for adding c; EITHER TAKE a or b 
        // a is m1
        // b is m2 
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                d[i][j]=a[i][j] + b[i][j] +c[i][j];
            }
        }
        
        // printing the c elements
        printf("\nThe sum of the two matrix is\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
               printf("%d ",d[i][j]);
            }
            printf("\n");
        }
        
    }
    else
    {
        printf("You entered invalid matrix");
    }
    
    return 0;
    
}
