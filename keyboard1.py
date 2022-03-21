import keyboard
keyboard.wait('1')
a="""
#include<iostream>
using namespace std;
void addition(int *a,int *b)
{
cout<<(*a+*b);
}
int main()
{
int a,b;
cin>>a>>b;
addition(&a,&b);
return 0;
}
"""
keyboard.write(a)