import keyboard
keyboard.wait('1')
a="""
#include<iostream>
using namespace std;
int main()
{
int n,i,j,k=0;
cin>>n;
int a[n][n];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cin>>a[i][j];
if(a[i][j]<11){k=k+a[i][j];}
}
}
cout<<k;
return 0;
}
"""
keyboard.write(a)