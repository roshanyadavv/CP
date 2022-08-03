#include<bits/stdc++.h>
using namespace std;

//time complexity: O(h)            h= height of the tree

struct bstnode{
      int data;
      bstnode* left;
      bstnode* right;
};

bstnode* getnewnode(int data){
    bstnode* newnode = new bstnode();
    newnode ->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

bstnode* insert(bstnode* root, int data){
    if(root == NULL)
      root = getnewnode(data);
    
    else if(data < root->data){
        root->left = insert(root->left, data);
    }

    else{
        root->right = insert(root->right, data);
    }

    return root;
}

int findmin(bstnode* root){
    if(root == NULL){
        cout<<"EMPTY TREE"<<endl;
        return -1;
    }

    else if( root->left == NULL ){
        return root->data;
    }

    return findmin(root->left);
}

int findmax(bstnode* root){
    if(root == NULL){
        cout<<"EMPTY trree"<<endl;
    }

    else if(root->right == NULL){
        return root->data;
    }

    return findmax(root->right);
}

int main(){
    bstnode* root = NULL;
    root = insert(root, 15);
    root = insert(root, 20);
    root = insert(root, 25);
    root = insert(root, 7);
    root = insert(root, 8);
    root = insert(root, 6);
    root = insert(root, 3);
    root = insert(root, 9);
    root = insert(root, 19);
    
    int min = findmin(root);
    int max = findmax(root);

    cout<<min<<" "<<max<<endl;
}