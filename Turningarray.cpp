//
// Created by 陈炯熙 on 2017/11/20.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if (rotateArray.size() == 0)
        {
            return 0;
        }
        int length = rotateArray.size()-1;
        int index1 = 0;
        int index2 = length ;
        int indexMid = index1;
        while(rotateArray[index2]<=rotateArray[index1])
        {
            if (index2-index1 == 1 )
            {
                indexMid = index2;
                break;
            }
            indexMid = (index1+index2)/2;
            if (rotateArray[indexMid]>=rotateArray[index2])
            {
                index1 = indexMid;
            }
            else if (rotateArray[indexMid]<=rotateArray[index2])
            {
                index2 = indexMid;
            }


        }

        return rotateArray[indexMid];


    }

};

int main(){
    Solution a ;
    vector<int> test = {3,4,5,6,1,2};
    int result = a.minNumberInRotateArray(test);
    cout<<result<<endl;

}