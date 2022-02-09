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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;

        queue<pair<TreeNode*, int>> q;
        int level = 0;
        q.push({root, level});
        
        while(!q.empty()){
            int s = q.size();
            
            int maxm = INT_MIN;
            
            while(s--){
                pair<TreeNode*, int> temp = q.front();
                q.pop();
                
                if(temp.first)
                    maxm = max(maxm, temp.first->val);
                
                if(temp.first->left) q.push({temp.first->left, temp.second + 1});
                if(temp.first->right) q.push({temp.first->right, temp.second + 1});             
            }
            ans.push_back(maxm);
        }
        
        return ans;
        
    }
};