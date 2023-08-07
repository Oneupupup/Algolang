//
// Created by QSYan on 2023/8/8.
//

#ifndef ALGOLANG_ALGO_LISTNODE_H
#define ALGOLANG_ALGO_LISTNODE_H

namespace algo {
    struct ListNode {
        int val;
        ListNode *next;

        ListNode() : val(0), next(nullptr) {}

        explicit ListNode(int x) : val(x), next(nullptr) {}

        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
}

#endif //ALGOLANG_ALGO_LISTNODE_H
