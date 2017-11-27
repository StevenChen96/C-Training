//
// Created by 陈炯熙 on 2017/11/25.
//
#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    double Power(double base, int exponent) {
        return pow(base,exponent);
    }
};

int main()
{
    Solution a;
    double test1;
    int test2;
    cin>>test1;
    cin>>test2;
    cout<<a.Power(test1,test2);
}
