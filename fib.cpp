#include<bits/stdc++.h>
usign namespace std;

int main(){

      int a=0, b=1, next=0, n= 20000;
      
      cout<<a<<","<<b<<",";
      for(int i=3; i<=n; i++){

          next = a+b;
          cout<<next<<",";

          a = b;
          b = next;
      }
      return 0;
}