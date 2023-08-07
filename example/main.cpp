#include <iostream>
#include "../dataDtructure/Algo_listnode.h"

using namespace algo;

int main() {
    auto *head = new ListNode(1);
    ListNode *p = head;
    for (int i = 2; i < 6; ++i) {
        p->next = new ListNode(i);
        p = p->next;
    }
    p = head;
    while (p) {
        std::cout << p->val << " ";
        p = p->next;
    }
    std::cout << std::endl;

    while(head){
        p = head->next;
        delete head;
        head = p;
    }
    return 0;
}