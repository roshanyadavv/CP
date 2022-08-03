#include<bits/stdc++.h>
using namespace std;

//Time complexity: O(n)

struct node{
    int data;
    node *left;
    node *right;
};

node* getnewnode(int data){
    node* newnode = new node();
    newnode->data = data;
    newnode->left=newnode->right = NULL;
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

bool islesser(node* root, int value){         //check if all the left nodes have value less than current node
    if(root == NULL){
        return true;
    }

    if(root->data <= value   &&    islesser(root->left,value)    &&    islesser(root->right, value))
       return true;
    
    else return false;
}

bool isgreater(node* root, int value){       //check if all the right nodes have value greater than current node
    if(root == NULL)
      return true;
    
    if(root->data > value    &&   isgreater(root->left,value)   &&    isgreater(root->left, value))
      return true;

    else return false;   
}

bool isbst(node* root){
    if(root == NULL)
       return true;

    if(islesser(root->left, root->data)  && isgreater(root->right, root->data) &&  isbst(root->left)   && isbst(root->right))
        return true;
    
    else return false;
}

int main(){
    node* root = NULL;

    root = insert(root, 15);
    root = insert(root, 20);
    root = insert(root, 12);
    root = insert(root, 10);
    root = insert(root,  8);
    root = insert(root, 34);
    root = insert(root, 18);

    cout<< isbst(root);

}