#include<bits/stdc++.h>
using namespace std;

//time complexity: O(h)     h= height of the tree

struct node
{
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

node* findmin(node* root){                //finding the min element in right subtree
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}

node* del(node* root, int data){    
    if(root == NULL)
      return root;
    
    //finding the element
    else if(data < root->data)  root->left = del(root->left, data);
    else if(data > root->data)  root->right = del(root->right, data);
    
    //after finding the data
    else{
       //case 1: no child
       if(root->left == NULL && root->right == NULL){
        delete root;
        root = NULL;
       }

       //case 2: one child
       else if(root->left == NULL){
        node* temp = root;
        root = root->right;
        delete temp;
       }
       else if(root->right == NULL){
        node* temp = root;
        root = root->left;
        delete temp;
       }

       //case 3: two children
       else{
        node* temp = findmin(root->right);
        root->data = temp->data;
        root->right = del(root->right, temp->data);
       }
    }
    return root;
}

void inorder(node* root){
    if(root == NULL) return;
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    node* root = NULL;

    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 11);
    root = insert(root, 7);
    root = insert(root, 20);
    root = insert(root, 17);
    root = insert(root, 25);

    root = del(root,10);

    inorder(root);
}