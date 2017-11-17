//
// Created by 陈炯熙 on 2017/11/16.
//

#include <iostream>
#include <stack>


using namespace std;

class Solution
{
public:
    void push(int node) {
        stack1.push(node);
        cout<<"Push "<<node<<" into the Queue."<<endl;

    }

    int pop() {
        int node;
        if (stack2.size()<=0)
        {
            while(stack1.size()>0)
            {
                node = stack1.top();
                stack1.pop();
                stack2.push(node);

            }
        }

        if (stack2.size() == 0)
        {
            return 0;
        }

        node = stack2.top();
        stack2.pop();

        return node;

    }

private:
    stack<int> stack1;
    stack<int> stack2;
};

int main()
{
    //test
    Solution Q;
    for (int j = 0; j < 10; ++j) {
        Q.push(j);
    }
    for (int i = 0; i < 10; ++i) {
        cout<<Q.pop()<<" ";
    }




}
