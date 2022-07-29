#include<bits/stdc++.h>
using namespace std;

struct bstnode{
    int data;
    bstnode* left;
    bstnode* right;
};

bstnode* getnewnode(int data){

    bstnode* newnode = new bstnode();            //creating a new node
    newnode->data = data;                        // insert tha data
    newnode->left = newnode->right = NULL;       // set left and right nodes address to null
    return newnode;                              //return the address of new node
}

bstnode* insert( bstnode* root, int data){

    if(root == NULL){ //EMPTY TREE
      root = getnewnode(data);
    }

    else if(data <= root->data){             //if data is greater than root
        root->left = insert(root->left, data);
    }

    else{                                   //if data is smaller than root
        root->right = insert(root->right, data);
    }

    return root;
}

bool search(bstnode* root, int data){
    
    if(root == NULL)
      return false;
    
    if(root->data == data)
      return true;
    
    else if(data <= root->data)
      return search(root->left, data);
    
    else
      return search(root->right, data);
    

}


int main(){
    
    bstnode* root = NULL;                //creating an empty tree
    root = insert(root, 15);
    root = insert(root, 14);
    root = insert(root, 20);

    int n;
    //cout<<"enter the number";
    cin>>n;

    if(search(root,n) == true)
       cout<<"fount"<<endl;
    
    else
       cout<<"not found"<<endl;
}