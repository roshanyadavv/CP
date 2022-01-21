#include <bits/stdc++.h>
#define ll long long int
using namespace std;

    vector<int> v;
 
void printSubstrings(string str)
    {
        for (int i = 0; i < str.length(); i++) {
            string subStr;
            for (int j = i; j < str.length(); j++) {
                subStr += str[j];
                v.push_back(stoi(subStr, nullptr, 2));
            }
                
        }
    }

bool isPrime(int x)
{
    if (x <= 1)
        return false;
    
    if(x==2)
        return true;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
 
            // Return not prime
            return false;
    }
 
    // If prime return true
    return true;
}

int main(){

    int t;
    cin>>t;

    while(t--){
    
    int count=0;
    string str;
    cin>>str;
    
    printSubstrings(str);

    for(ll i=0; i<v.size(); i++){
           if(isPrime(v[i])){
              count++;
              break;}
    }
    
    if(count>0)
       cout<<"yes"<<endl;
    else
       cout<<"no"<<endl;

    }
}