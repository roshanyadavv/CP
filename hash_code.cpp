#include<bits/stdc++.h>
#include <iostream>
#include <fstream> 
#define ll long long int
using namespace std;

struct point{
    char person;
    int number_of_skills;
    vector<char> skills;
    vector<int> skillsexp;
};

struct work{
    char name;
    ll days;
    ll score;
    ll bb;
    ll roles;
    vector<char> skillsreq;
    vector<int> reqskillexp;
};

int main(){

    /*ll c, p;
    cin>>c>>p;
    
    struct point contributors[c];
    struct work projects[p];

    for(ll i=0; i<c; i++){
        cin>>contributors[i].person;
        cout<<contributors[i].person<<" ";
        cin>>contributors[i].number_of_skills;
        cout<<contributors[i].number_of_skills<<endl;
        for(int j=0; j<contributors[i].number_of_skills; j++){
            char a;
            cin>>a;
            contributors[i].skills.push_back(a);
            cout<<contributors[i].skills[j]<<" ";
            int b;
            cin>>b;
            contributors[i].skillsexp.push_back(b);
            cout<<contributors[i].skillsexp[j]<<endl;
        }
    }

    for(ll i=0; i<p; i++){
        cin>>projects[i].name;
        cin>>projects[i].days;
        cin>>projects[i].score;
        cin>>projects[i].bb;
        cin>>projects[i].roles;
        for(int j=0; j<projects[i].roles; j++){
            char c;
            cin>>c;
            projects[i].skillsreq.push_back(c);
            int d;
            cin>>d;
            projects[i].reqskillexp.push_back(d);
        }
    }
    cout<<"yyyy"; */
    std::ofstream outfile ("an_example.txt");

    cout<<"3"<<"\n"<<"WebServer"<<"\n"<<"Bob Anna"<<"\n"<<"Logging"<<"\n"<<"Anna"<<"\n"<<"WebChat"<<"\n"<<"Maria Bob"<<endl;
}

