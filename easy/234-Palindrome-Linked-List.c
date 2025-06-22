#include <stdio.h>
#include <stdbool.h>


struct ListNode {
    int val;
    struct ListNode *next;
};

int listSize(struct ListNode* list);                        //Number of nodes in the linked list.

bool isPalindrome(struct ListNode* head) {
    struct ListNode* ptrLeft = head;            // ptr to left head
    struct ListNode* ptrRightHead = head;       // ptr to right half of list(static)
    struct ListNode* ptrRight = NULL;           // ptr to right head
    struct ListNode* temp = NULL;               // temp ptr
    bool even;
    int size = listSize(head);
    if (size <= 1){
        return true;
    }
    
    (size % 2 == 0)?(even = true):(even = false);           // checks if list length is even/odd.

    if (even){                                              // ptrRightHead <- right half of the linked list(skipping middle).
        for (int i = 1; i <= size/2; i++){
            ptrRightHead = ptrRightHead->next;
        }
    }
    else{
        for (int i = 1; i <= ((size/2)+1); i++){
            ptrRightHead = ptrRightHead->next;
        }
    }
    ptrRight = ptrRightHead;

    struct ListNode* leftIndex = ptrRightHead;
    struct ListNode* rightIndex = ptrRightHead->next;
    while(rightIndex != NULL){
        temp = rightIndex->next;
        rightIndex->next = leftIndex;
        leftIndex = rightIndex;
        rightIndex = temp;
    }

    for(int i=0; i<size/2;i++){
        if (leftIndex->val != ptrLeft->val){
            return false;
        }
        leftIndex = leftIndex->next;
        ptrLeft = ptrLeft->next;
    }
    return true;
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