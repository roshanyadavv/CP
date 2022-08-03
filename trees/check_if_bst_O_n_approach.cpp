#include<bits/stdc++.h>
using namespace std;

// TIME COMPLEXITY: O(n)

struct node{
    int data;
    node* left;
    node* right;
};


node* getnewnode(int data){
    node* newnode = new node();
    newnode->data = data;
    newnode->left = newnode->right =NULL;
    return newnode;
}

node* insert(node* root, int data){
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

bool isbstutil(node* root, int min, int max){
    if(root == NULL){
        return true;
    }

    if(root->data > min  && root->data < max   && isbstutil(root->left, min, root->data)
      && isbstutil(root->right, root->data, max))
      return true;
    
    else return false;
}

bool isbst(node* root){
    return isbstutil(root,  INT_MIN, INT_MAX);
}


int main(){

    node* root =NULL;

    root = insert(root, 15);
    root = insert(root, 20);
    root = insert(root, 12);
    root = insert(root, 10);
    root = insert(root,  8);
    root = insert(root, 34);
    root = insert(root, 18);

    cout<<isbst(root);
}