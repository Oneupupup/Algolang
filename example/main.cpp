#include <iostream>
#include <queue>
#include "../dataDtructure/Algo_treenode.h"

using namespace algo;

void bfs(TreeNode* head) {
    if (head == nullptr) {  // if head is nullptr, return directly
        return;
    }
    std::queue<TreeNode*> qbfs;
    qbfs.push(head);
    while (!qbfs.empty()) {
        std::cout << qbfs.front()->val << "  ";
        if (qbfs.front()->left != nullptr) {    // if current queue front has left child
            qbfs.push(qbfs.front()->left);
        }
        if (qbfs.front()->right != nullptr) {   // if current queue front has right child
            qbfs.push(qbfs.front()->right);
        }
        qbfs.pop();  // pop if we have alreay visit the node
    }
}

int main() {
    auto *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left  = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(8);

    bfs(root);
    // 广度优先遍历
    return 0;
}
