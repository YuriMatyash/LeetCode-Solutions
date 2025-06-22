#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* sumHead = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* sumPtr = sumHead;
    sumPtr->val = 0;
    sumPtr->next = NULL;
    int remainder = 0;
    int temp = 0;

    while((l1 != NULL) || (l2 != NULL) || (remainder != 0)){
        temp = 0;
        if(l1 != NULL){
            temp += l1->val;
            l1 = l1->next;
        }
        if(l2 != NULL){
            temp += l2->val;
            l2 = l2->next;
        }
        temp += remainder;


        if(temp <10){
            sumPtr->val += temp;
            remainder = 0;

            if((l1 != NULL) || (l2 != NULL)){
                sumPtr->next = (struct ListNode*)malloc(sizeof(struct ListNode));
                sumPtr = sumPtr->next;
                sumPtr->val = 0;
                sumPtr->next = NULL;
            }
        }
        else{
            sumPtr->val = temp % 10;
            remainder = 1;
            sumPtr->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            sumPtr = sumPtr->next;
            sumPtr->val = 0;
            sumPtr->next = NULL;
        }
    }
    return sumHead;
}