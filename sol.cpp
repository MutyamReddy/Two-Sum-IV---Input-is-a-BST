class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
       unordered_map<int,int>mp;
        queue<TreeNode*>q;
        q.push(root);
        while(q.size()>0){
            auto curr=q.front();
            q.pop();
            if(mp.find(k-curr->val)!=mp.end()){
                return true;
            }else {
                mp[curr->val]=1;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
        }
        return false;
    }
};
