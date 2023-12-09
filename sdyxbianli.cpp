#include <iostream>
using namespace std;
// 树节点的结构
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// 前序遍历
void preorderTraversal(TreeNode* root) {
    if (root == NULL) return;
    cout << root->val << " "; // 先访问根节点
    preorderTraversal(root->left); // 递归遍历左子树
    preorderTraversal(root->right); // 递归遍历右子树
}

// 中序遍历
void inorderTraversal(TreeNode* root) {
    if (root == NULL) return;
    inorderTraversal(root->left); // 递归遍历左子树
    cout << root->val << " "; // 访问根节点
    inorderTraversal(root->right); // 递归遍历右子树
}

// 后序遍历
void postorderTraversal(TreeNode* root) {
    if (root == NULL) return;
    postorderTraversal(root->left); // 递归遍历左子树
    postorderTraversal(root->right); // 递归遍历右子树
    cout << root->val << " "; // 最后访问根节点
}
int main() {
    // 创建一个简单的二叉树
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    
    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;
    
    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}


