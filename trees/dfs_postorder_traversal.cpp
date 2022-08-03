#include<bits/stdc++.h>
using namespace std;

struct node
{
    char data;
    node* left;
    node* right;
};

node* getnewnode(char data){
    node* newnode = new node();
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

node* insert(node* root, char data){
    if(root == NULL){
        root = getnewnode(data);
    }

    else if(root->data >= data){
        root->left = insert(root->left, data);
    }
    else
        root->right = insert(root->right, data);

    return root;
}

void postorder(node *root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    node* root = NULL;
    
    root = insert(root, 'D');
    root = insert(root, 'E');
    root = insert(root, 'F');
    root = insert(root, 'G');
    root = insert(root, 'A');
    root = insert(root, 'B');
    root = insert(root, 'C');

    postorder(root);
}
