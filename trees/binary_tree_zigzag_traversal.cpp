/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void leftsubtree(TreeNode<int> *root, vector<int>& v, int& maxlevel, int level){
    if(root == NULL) return;
    if(level > maxlevel){
       v.push_back(root->data);
       maxlevel = level;
    }
    leftsubtree(root->left, v, maxlevel, level+1);
    leftsubtree(root->right, v, maxlevel, level+1);
}

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    int maxlevel = 0;
    
    vector<int> v;
    leftsubtree(root, v, maxlevel, 1);
    return v;
    
}