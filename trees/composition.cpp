#include<bits/stdc++.h>
using namespace std;

// public class B{
//     public: 
//     void print(string val){
//         cout<<val<<endl;
//     }
// }

// public class A{
//     private B obj;
//     public:
//     A(){
//      this.obj=new B();
//      b.print("From A");
//     }
// }
#include<iostream>
#include<stack>
int main(){
    // string s;
    // cin>>s;
    // bool flag=true;
    // stack<char>st;
    // for(int i=0;i<s.size();i++){
    //     if(s[i]=='{') st.push('{');
    //     else if(s[i]=='}'){
    //         if(st.empty()){
    //             flag=false;
    //             break;
    //         }else{
    //             st.pop();
    //         }
    //     }
    // }
    // if(flag && st.empty()) cout<<"Valid\n";
    // else cout<<"Not Valid\n";

    int m,n;
    cin>>m>>n;
    int arr1[m];
    int arr2[n];
    int soln[m+n];
    for(int i=0;i<m;i++) cin>>arr1[i];
    for(int i=0;i<n;i++) cin>>arr2[i];
    
    int ptr=0; int p1=0,p2=0;
    while(ptr<(m+n)){
        if(p1==m) soln[ptr++]=arr2[p2++];
        else if(p2==n) soln[ptr++]=arr1[p1++];
        else if(arr1[p1]<=arr2[p2]) soln[ptr++]=arr1[p1++];
        else soln[ptr++]=arr2[p2++];
    }

    for(int i=0;i<m+n;i++) cout<<soln[i]<<" ";
    cout<<endl;
    return 0;
}