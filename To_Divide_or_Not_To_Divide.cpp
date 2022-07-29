#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        long long int a,b,n, number=0;
        cin>>a>>b>>n;
        
        number = n/a+1 ;

        if(a == b || a%b == 0){
            cout<<"-1"<<endl;

        }

        else if(n%a == 0 && n%b != 0){
            cout<<n<<endl;
        }

        else{
           
           while((number*a)%b == 0){
                number++;
           }

           cout<<number*a<<endl;
            
        }
        

    }
}