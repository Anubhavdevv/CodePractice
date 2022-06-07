#include <iostream>
#include <cstddef>
	
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  
    void preOrder(Node *root) {

          if( root == NULL )
              return;

          std::cout << root->data << " ";

          preOrder(root->left);
          preOrder(root->right);
      }

/* you only have to complete the function given below.  
Node is defined as  

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

//Recursive Approach 

    Node * insert(Node * root, int data) {
        if(root==NULL){
            return new Node(data);
        }
        else if(data>root->data)
          root->right = insert(root->right, data);
        else 
          root->left = insert(root->left, data);
        return root;    
    }

}; //End of Solution
