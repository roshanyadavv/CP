#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node* getnewnode(int data){
    node* newnode = new node();
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

void levelorder(node* root, int &level, int &sum){
    if(root == NULL){
        return;
    }

    queue<node*> q;

    q.push(root);

    while(!q.empty()){
        node* current = q.front();
        if(level%2 == 0)
        sum += current->data;

        if(current->left != NULL)
           q.push(current->left);
        if(current->right != NULL)
           q.push(current->right);
        q.pop();
        
    }
}


node* insert(node *root, int data){
    if(root == NULL){
        root = getnewnode(data);
    }

    else if(root->data >= data){
        root->left = insert(root->left, data);
    }

    else{
        root->right = insert(root->right, data);
    }

    return root;
}


int main(){

    node* root =NULL;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        root = insert(root, a);
    }
    int a = 0, sum =0;
    levelorder(root, a,sum);
}
