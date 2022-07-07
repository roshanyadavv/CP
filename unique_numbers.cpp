#include<bits/stdc++.h>
using namespace std;

int main(){

    int l, h, count=0;
    cin>>l>>h;

    for(int i=l; i<=h; i++){
        if(i%10 != i/10)
          count++;
    }
    cout<<count;

}