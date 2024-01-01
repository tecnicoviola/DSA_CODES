
class solution{
	public:
	int height(TreeNode* root){
		//base case
		if(root == NULL)
		return 0;

		int leftheight = height(root->left);
		int rightheight = height(root -> right);
		int ans = 1+ max(leftheight, rightheight);
		return ans;
	}
	bool isbalanced(TreeNode* root){
		//base case
		if(root == NULL)
            return true;

        //1 case
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int diff = abs(leftHeight - rightHeight);

        bool ans1 = (diff <= 1);
		
		//Recursion
		bool leftAns = isBalanced(root->left);
        bool rightAns = isBalanced(root->right);

        if(ans1 && leftAns && rightAns)
            return true;
        else
            return false;
    }
};

    int main() { 
	Node* root = NULL;

	root = buildTree();
	height(root);
	cout << "height: "<< height(root) << endl;

    return 0;
}