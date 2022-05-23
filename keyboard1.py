import keyboard
keyboard.wait('1')
a="""
#include<bits/stdc++.h>
using namespace std;

int main(){
int n1,n2,n3,num=0,a=0;
cin>>n1>>n2>>n3;

a = min(n1/1000, n2/1000);
a = min(a,n3/1000);
n1 = n1%1000;
n2 = n2%1000;
n3 = n3%1000;
cout<<n1<<" "<<n2<<" "<<n3<<endl;

a = max(n1/100,n2/100);
a = max(a,n3/100);
num = num+a*100;
n1 = n1%100;
n2 = n2%100;
n3 = n3%100;
cout<<n1<<" "<<n2<<" "<<n3<<endl;

a = min(n1/10,n2/10);
a = min(a,n3/10);
num = num+a*10;
n1 = n1%10;
n1 = n2%10;
n3 = n3%10;
cout<<n1<<" "<<n2<<" "<<n3<<endl;

a = max(n1,n2);
a = max(a,n3);

num = num+a;
cout<<num<<endl;

}
"""
keyboard.write(a)