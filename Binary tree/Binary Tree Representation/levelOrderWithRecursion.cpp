//User function Template for C++

/*struct node {
  int data;
  struct node *left;
  struct node *right;
};

struct node *newNode(int data) {
  struct node *node = (struct node *)malloc(sizeof(struct node));

  node->data = data;

  node->left = NULL;
  node->right = NULL;
  return (node);
}*/

class Solution{
public:

    void helper(node* currentNode, vector<int> &vec, int i)
    {
        if(i>=vec.size() || currentNode==NULL) return;
        
        if(2*i+1>=vec.size()) return ;
        
        node* leftNode = newNode(vec[2*i+1]);
        
        currentNode->left= leftNode;
        
        helper(leftNode, vec, 2*i+1);
        
        if(2*i+2>=vec.size()) return ;
        
        node*rightNode = newNode(vec[2*i+2]);
        
        currentNode->right= rightNode;
        
        helper(rightNode, vec, 2*i+2);
        
    }

    void create_tree(node* root0, vector<int> &vec){
        
        if(root0==NULL) return;
        
        helper(root0,vec,0);
    }

};