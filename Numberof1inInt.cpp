//
// Created by 陈炯熙 on 2017/11/24.
//
#include <iostream>

using namespace std;

class Solution {
public:
    int  NumberOf1(int n) {
        int count = 0;
        while (n!=0)
        {
            count++;
            n = n&(n-1);
        }
        return count;
    }
};

int main()
{
    int n ;
    cin>>n;
    Solution a;
    cout<<a.NumberOf1(n);
}
