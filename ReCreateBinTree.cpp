//
// Created by 陈炯熙 on 2017/11/17.
//

#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        int size = pre.size();
        if (size <= 0){
            return NULL;
        }
        TreeNode* head = new TreeNode(pre[0]);
        int root = 0;
        vector<int> leftpre,leftin,rightpre,rightin;
        for (int i = 0; i < size ; ++i) {
            if (vin[i] == pre[0])
            {
                root = i;
                break;
            }
        }

        for (int i = 0; i < root ; ++i) {
            leftin.push_back(vin[i]);
            leftpre.push_back(pre[i+1]);
        }
        for (int i = root+1; i < size ; ++i) {
            rightin.push_back(vin[i]);
            rightpre.push_back(pre[i]);

        }

        head->left = reConstructBinaryTree(leftpre,leftin);
        head->right = reConstructBinaryTree(rightpre,rightin);

        return head;
    }


};

int main()
{
    vector<int> pre = {1,2,4,7,3,5,6,8};
    vector<int> in  = {4,7,2,1,5,3,8,6};
    Solution test;
    TreeNode* T = (TreeNode*)malloc(sizeof(TreeNode));
    T = test.reConstructBinaryTree(pre,in);
    while (T->left != NULL)
    {
        cout<<T->val<<" ";
        T=T->left;
    }
    T = test.reConstructBinaryTree(pre,in);
    while (T->right != NULL)
    {
        cout<<T->val<<" ";
        T=T->right;
    }


}