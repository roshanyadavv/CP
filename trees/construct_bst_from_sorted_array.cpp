/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
TreeNode<int>* insert(vector<int> & v, int a, int b){
    if(a>b){
        return NULL;
    }
    int m = ((b-a)/2)+a;
    TreeNode<int> *root = new TreeNode<int>(v[m]);
    root->left = insert(v,a,m-1);
    root->right = insert(v,m+1, b);
    return root;
}
TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    return insert(arr, 0, n-1);
}

