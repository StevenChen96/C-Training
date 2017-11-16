//
// Created by 陈炯熙 on 2017/11/15.
//
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
using namespace std;
struct ListNode {
        int val;
        struct ListNode *next;
        ListNode(int x) :
        val(x), next(NULL) {}
};



class Solution {
public:
    vector<int> printListFromTailToHead(struct ListNode* head1) {
    vector<int> value;
    if (head1 != NULL)
    {
     value.insert(value.begin(),head1->val);
        if(head1->next != NULL)
            {
                vector<int> tempVec = printListFromTailToHead(head1->next);
                 if(tempVec.size()>0)
                 value.insert(value.begin(),tempVec.begin(),tempVec.end());
            }

             }
         return value;
        }
};

/*void Create(ListNode *head){
   head = (ListNode *)malloc(sizeof(ListNode));
    if (head == NULL)
    {
        cout<<"ERROR IN CREATE head";
        exit(0);
    }
    head->val = 0;
    head->next = NULL;

    }
}*/



int main()
{   //test function
    ListNode *p1,*p2,*p3;
    p1 = (ListNode*)malloc(sizeof(ListNode));
    p2 = (ListNode*)malloc(sizeof(ListNode));
    p3 = (ListNode*)malloc(sizeof(ListNode));
    p1->next = p2;
    p2->next = p3;
    p3->next = NULL;
    p1->val = 0;
    p2->val = 1;
    p3->val = 2;

    Solution a ;
    vector<int>result = a.printListFromTailToHead(p1);
    for (int i = 0; i < 3 ; ++i) {
        cout<<result[i]<<endl;
    }




}