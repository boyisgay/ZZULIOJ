/*
��Ŀ����:
ͳ��һ�������ַ�����ָ�����ַ����ֵĴ�����
����:
��������������ɲ���������ÿ��������������2�У���һ��Ϊһ�����Ȳ�����5����
�������ڶ���Ϊһ�����Ȳ�����80���ַ�����ע��������ַ��������ո񣬼��ո�Ҳ����
��Ҫ��ͳ�Ƶ��ַ�֮һ������#ʱ�������������Ӧ�Ľ����Ҫ�����

��������:
THIS IS A TEST
ing
this is a long test string
#
�������:
I 2
i 3
  5
n 2
g 2

*/
#include <cstring>
#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int number[128];

int main(){
    string str1 , str2;
    while(getline(cin,str1)){
        if(str1 == "#"){
            break;
        }
        memset(number, 0 ,sizeof(number));
        getline(cin,str2);
        for(int i=0;i<str2.size();i++){
            number[ str2[i] ] ++;
        }
        for(int i = 0; i < str1.size(); i++){
            printf("%c %d\n",str1[i] , number[str1[i]]);
        }
    }
}
