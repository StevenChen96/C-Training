//
// Created by 陈炯熙 on 2017/11/27.
//

#include <iostream>
#include <stack>

using namespace std;



struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
            val(x), next(NULL) {
    }
};
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        stack<ListNode*> T;
        int ans,count;
        count = 0;
        if (pListHead == nullptr)
        {
            cout<<"Error!";
            exit(0);
        }
        while (pListHead != NULL) {
            T.push(pListHead);
            count++;
            pListHead = pListHead->next;
        }
        for (int i = 0; i < k; ++i) {
            T.pop();
        }
        return T.top();
    }
};

int main()
{
    Solution a ;
    ListNode *p1,*p2,*p3,*p4,*ans;
    p1 = (ListNode*)malloc(sizeof(ListNode));
    p2 = (ListNode*)malloc(sizeof(ListNode));
    p3 = (ListNode*)malloc(sizeof(ListNode));
    p4 = (ListNode*)malloc(sizeof(ListNode));
    ans = (ListNode*)malloc(sizeof(ListNode));
    p1->next = p2;
    p2->next = p3;
    p3->next = p4;
    p4->next = NULL;
    p1->val = 0;
    p2->val = 1;
    p3->val = 2;
    p4->val = 3;
    int k = 0;
    ans = a.FindKthToTail(p1,k);
    cout<<ans->val<<endl;


}