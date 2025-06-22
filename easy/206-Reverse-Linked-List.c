#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

int listSize(struct ListNode* list);

struct ListNode* reverseList(struct ListNode* head) {
    
    if(!head){                              //Block checks base cases of empty list/ single node.
        return head;
    }
    int size = listSize(head);
    if(size == 1){
        return head;
    }

    struct ListNode* left = head;
    struct ListNode* right = head->next;
    struct ListNode* temp = NULL;
    
    while(right != NULL){
        temp = right->next;
        right->next = left;
        left = right;
        right = temp;
    }
    head->next = NULL;
    return left;
}

int listSize(struct ListNode* list){
    struct ListNode* ptr = list;
    int size = 1;
    while (ptr->next != NULL){                              
        ptr = ptr->next;
        size++;
    }
    return size;
}