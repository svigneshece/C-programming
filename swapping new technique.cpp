// SWAPPING TWO NUMBERS PROGRAM 

#include<stdio.h>
int main()
{
	int a, b ;
	printf("\n Enter the value of a:");
	scanf("%d",&a);
	printf("\n Enter the value of b:");
	scanf("%d", &b);
	
	printf("\n Before swapping value of a is %d & value of b is %d",a,b);
	printf("\n \t\t Lets go..........");
	// swapping tech
	
	b=a+b-(a=b);
	printf("\n After swapping value of a is %d & value of b is %d",a,b);
	
	return 0;
}
