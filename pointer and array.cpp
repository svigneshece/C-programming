#include<stdio.h>
int main()
{
    int values[]={1,2,3,4,5,6,7,8};
    //printing the array
    // method 1 
    printf("%d",values[2]);
    
    //method 2;
    printf("\n%d",*values+2);
    
    return 0;
}
