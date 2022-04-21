/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
	int findPos(vector<int> inorder,int element, int s, int e){
		for(int i=s; i<=e; i++){
			if(inorder[i] == element)
				return i;
		}
		return -1;
	}
    
    
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int& k, int s, int e){
        if(s > e || k >= preorder.size()) 
            return NULL;

        int pos = findPos(inorder, preorder[k],s, e);
        
        if(pos == -1) return NULL;
        
        TreeNode* root = new TreeNode(inorder[pos]);
        k++;
        root->left = helper(preorder, inorder, k, s, pos-1);
        root->right = helper(preorder, inorder, k, pos+1, e);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int rootIdx = 0;
        return helper(preorder, inorder, rootIdx, 0, inorder.size()-1);
    }
};