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
    vector<vector<int>> levelOrder(TreeNode* root) {
        // using BFS
        vector<vector<int>> result; //2DVECTOR for storing result 
        if(root==nullptr)
            return result;
        queue<TreeNode*> q;
        q.push(root); //3 for first level only 
        //For checking another level 
        while(!q.empty()){
            vector <int> current;
            int s = q.size(); //Size of the queue store in variable because size will change so we stor it in variable
            for(int i=0;i<s;i++){
                TreeNode * frnt = q.front();
                q.pop();
                current.push_back(frnt->val);
                if(frnt->left){
                    q.push(frnt->left);
                }
                if(frnt->right){
                    q.push(frnt->right);
                }
            }    
            result.push_back(current);
        }
        return result;
        
    }
};
