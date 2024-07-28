#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	printf("Enter your string:");
	scanf("%c",name);
	char temp[20];
	int c;
	
	// strrev()
	// strcpy()
	// strcmp()
	
	strcpy(temp,name);
	strrev(name);
	
	c= strcmp(name,temp);
	// to check 0 or 1
	if(c==0)
	{
		printf("\nIt is the palindrome");
	}
	else
	{
		printf("\nIt is not palindrome");
	}
	return 0;
}
