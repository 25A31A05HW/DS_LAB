//c++ program to implement linear search
#include<iostream>
using namespace std;
int main()
{
  int a[10],n,i,key;
  bool x=false;
cout<<"enter n and key values:";
cin>>n>>key;
for(i=0;i<n;i++)
{
  cout<<"enter array element"<<i+1<<":";
  cin>>a[i];
}
for(i=0;i<n;i++)
{
if(a[i]==key)
{
  cout<<"key element found at index:"<<i<<endl;
  x=true;
  break;
}
}
if(!x)
{
  cout<<"key element not found";
}
}
