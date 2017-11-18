//
// Created by 陈炯熙 on 2017/11/18.
//
#include <iostream>2

using namespace std;

class Solution {
public:
    int Fibonacci(int n) {
        int result[2] = {0,1};
        if (n>39)
        {
            exit(0);
        }
        else if (n<2)
        {
            return result[n];
        }
        int FiboN = 0;
        int FiboONE = 1;
        int FiboTWO = 0;
        for (int i = 2; i <= n; ++i) {
            FiboN = FiboONE + FiboTWO;
            FiboTWO = FiboONE;
            FiboONE = FiboN;
        }
        return FiboN;

    }
};

int main()
{
    int ans;
    Solution test;
    for (int i = 1; i <= 39 ; ++i) {
        cout<<test.Fibonacci(i)<<" ";

    }

}