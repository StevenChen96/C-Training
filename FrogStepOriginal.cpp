//
// Created by 陈炯熙 on 2017/11/24.
//

#include<iostream>

using namespace std;

int solution(int number)
{   int One,Two,Count;
    int FirstTwo[2] = {1,2};
    if(number<=0)
    {
        cout<<"Error!"<<endl;
        exit(0);
    }
    else if(number<=2)
    {
        Count = FirstTwo[number-1];
    }

    One = 1;
    Two = 2;
    for (int i = 3; i <= number  ; ++i) {
        Count = One + Two;
        One = Two;
        Two = Count;
    }


    return Count;
}

int main()
{
    int n;
    cin>>n;
    int result = solution(n);


    cout<<result<<endl;
    return 0;
}