//
// Created by 陈炯熙 on 2017/11/24.
//
#include <iostream>

using namespace std;

class Solution {
public:
    int rectCover(int number) {
        int result[2] = {0,1};
        if (number<=0)
        {
            cout<<"Error!";
            exit(0);
        }
        else if (number<2)
        {
            return result[number];
        }

        int FN,FOne,FTwo;
        FOne = 1;
        FTwo = 0;
        for (int i = 1; i <= number; ++i) {
            FN = FOne + FTwo;
            FTwo = FOne;
            FOne = FN;
        }
        return FN;
    }
};

int main()
{
    int n;
    cin>>n;
    Solution a ;
    cout<<a.rectCover(n);
}