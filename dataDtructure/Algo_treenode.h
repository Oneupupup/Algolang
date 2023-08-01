//
// Created by QSYan on 2023/8/2.
//

#ifndef ALGOLANG_ALGO_TREENODE_H
#define ALGOLANG_ALGO_TREENODE_H

namespace algo {
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;

        TreeNode() : val(0), left(nullptr), right(nullptr) {}

        explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
}// namespace algo

#endif //ALGOLANG_ALGO_TREENODE_H
