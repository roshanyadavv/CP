#include<bits/stdc++.h>
using namespace std;

int isPalindrome(string S)
{
    // Stores the reverse of the
    // string S
    string P = S;
 
    // Reverse the string P
    reverse(P.begin(), P.end());
 
    // If S is equal to P
    if (S == P) 
        // Return "Yes"
        return 1;
    
    else return 0;
}

int main(){

    int t;
    cin>>t;

    while(t--){

        int n, count =0;
        cin>>n;

        string s;
        cin>>s;

        while(isPalindrome(s) != 1 && count <=n/2){
            count++;
            s.erase(s.begin() + s.size()/2);
        }

        cout<<s<<endl;

    }
}