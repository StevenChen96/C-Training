//
// Created by 陈炯熙 on 2017/11/15.
//
#include <iostream>

using namespace std;


void replaceSpace(char *str, int length) {
        if (str == nullptr || length <=0)return;
        int Oldlength = 0;
        int Blanks = 0;
        for (int i = 0; str[i]!='\0' ; ++i) {
            ++Oldlength;
            if (str[i] == ' ')
            {
                ++Blanks;
            }
        }
        int Newlength = Oldlength + 2*Blanks;
        int oldindex = Oldlength;
        int newindex = Newlength;
        if (Newlength > length)
        {
            return;
        }

        while(oldindex>=0 && newindex>=oldindex)
        {
            if (str[oldindex] == ' '){
                str[newindex--]='0';
                str[newindex--]='2';
                str[newindex--]='%';
            }
            else {str[newindex--]=str[oldindex];}
            oldindex--;
        }
    }


int main()
{   int length = 100;
    char str[20];
    strcpy(str,"We are Cool!");
    replaceSpace(str,length);
    printf("%s\n",str);
}