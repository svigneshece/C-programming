#include<iostream>
using namespace std;
int main()
{
    long get, sum=0,n,t,r;
    
    cout<<"Enter the number: ";
    cin>>get;
    cout<<"The list of the armstrong numbers are given below!..."<<endl;
  for(int i=100;i<=get;i++)
  {
 
    n=i;
    while(n>0)//153  15
    {
        r=n%10;//3  5 1
        sum=sum+(r*r*r);//27 + 125=>152+1
        n=n/10;//15  1 0
    }
    if(sum==i)
    {
        cout<<i<<endl;
    }
    sum=0;
  }
    return 0;
}
