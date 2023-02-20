#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        long long int n, count =1,a = 1, b = 5;
        cin>>n;

        if(n == 1){
            cout<<"1"<<endl;
            cout<<"1 2"<<endl;
        }
        else if(n == 2){
            cout<<"1"<<endl;
            cout<<"2 6"<<endl;
        }
        else if(n == 3){
            cout<<"2"<<endl;
            cout<<"2 6"<<endl;
            cout<<"1 9"<<endl;
        }
        else{
           count = n-1;

        cout<<count<<endl;

        for(int i=0; i< count; i++){
            if(a == 2)
              a++;
            cout<<a<<" "<<b<<endl;
            a +=1;
            b += 3;
        }
        }
    }
    
}