#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

    ll t;
    cin>>t;

    while(t--){

        ll n,x,correct=0, incorrect = 0, unattemted = 0;
        cin>>n>>x;

        if(x == 0){
          cout<<"Yes"<<endl;
          cout<<"0 0 "<<n<<endl;}
        
        else if(x<3){
            correct = 1;
            incorrect = abs(x-3);

            if(correct+incorrect <= n){
                cout<<"Yes"<<endl;
                cout<<correct<<" "<<incorrect<<" "<< n-(correct+incorrect)<<endl;
            }
            else
                cout<<"No"<<endl;

        }

        else if(x % 3 == 0){
            if(x/3 <= n){
                cout<<"Yes"<<endl;
                cout<<x/3<<" "<<0<<" "<<n-x/3<<endl;
            }

            else
               cout<<"No"<<endl;
        }

        else{
            correct = x/3 + 1;
            incorrect = abs(x - (correct*3));
        //    unattemted = abs(n - (correct+incorrect));

            if(correct+incorrect <= n){
                cout<<"Yes"<<endl;
                cout<<correct<<" "<<incorrect<<" "<<  n - (correct+incorrect) <<endl;
            }
            else
               cout<<"No"<<endl;
        }
        
    }
}