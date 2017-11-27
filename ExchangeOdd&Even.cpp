//
// Created by 陈炯熙 on 2017/11/27.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reOrderArray(vector<int> &array) {
        if (&array==NULL||array.size()<=0)
        {
            cout<<"Error"<<endl;
            exit(0);
        }
        int length = array.size();
        int *p = &array[0];
        int *q = &array[length-1];
        while (p<q)
        {
            while(p<q && (*p & 0x1)!=0)
            {
                p++;
            }
            while(p<q && (*q & 0x1)==0)
            {
                q--;
            }

            if (p<q)
            {
                int temp = *p;
                *p = *q;
                *q = temp;
            }
        }

    }
};

int main()
{
    Solution a ;
    vector<int> test = {1,2,3,4,5};
    a.reOrderArray(test);
    for (int i = 0; i < 5; ++i) {
        cout<<test[i]<<" ";
    }

}