#include<iostream>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
        data = x;
        left = nullptr;
        right = nullptr;           
    }
};
int main(){
    // Initilize and allocate memory for tree nodes
    TreeNode* firstNode = new TreeNode(2);
    TreeNode* secondNode = new TreeNode(3);
    TreeNode* thirdNode = new TreeNode(4);
    TreeNode* fourthNode = new TreeNode(5);

    // Connect binary tree nodes
    firstNode->left = secondNode;
    firstNode->right = thirdNode;
    secondNode->left = fourthNode;

    // Print values
    cout << firstNode->data << endl;
    cout << firstNode->left->data << endl;
    cout << firstNode->right->data << endl;
    cout << secondNode->left->data << endl;

    return 0;
}
