
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> ans;
        queue<TreeNode*> q;

        vector<int> temp;

        q.push(root);

        while (!q.empty()) {
            int cap = q.size();

            for (int i = cap; i >0; i--) {
                // cout << i << endl;
                if (q.empty())
                    break;
                TreeNode* currentNode = q.front();
                q.pop();
                if (currentNode == NULL)
                    continue;
                temp.push_back(currentNode->val);
                q.push(currentNode->left);
                q.push(currentNode->right);
            }

            if (!temp.empty()) {
                ans.push_back(temp);
            }

            for(int i=0;i<temp.size();i++)
            {
                cout<<temp[i]<<',';
            }
            temp.clear();
        }

        return ans;
    }
};8