import keyboard
keyboard.wait('1')
a="""
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,l;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        a[i]=a[i]*b[i];
    }
    j=a[0];
    for(i=1;i<n;i++)
    {
        if(j<a[i]){j=a[i];k=b[i];}
    }
    for(i=n-1;i>=0;i--)
    {
        if((j==a[i])&&(b[i]>=k)){k=b[i];l=i+1;}
    }
    cout<<l;
    return 0;
}
"""
keyboard.write(a)