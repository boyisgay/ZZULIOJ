#include<iostream>
#include<cstdio>
#include<string>
/*
��Ŀ����
����һ������Ӣ�ﵥ�ʣ�����Ӣ���﷨����ѵ�����ɸ������������£�
��1�� �Ը�����ĸy��β����yΪi���ټ�es��
��2�� ��s, x, ch, sh��β�����es��
��3�� ��Ԫ��o��β�����es��
��4�� �����������s��

����
����һ���ַ���������Сд��ĸ�����Ȳ�����20��

���
������Ӧ�ĸ�����ʽ��

�������� Copy
butterfly
������� Copy
butterflies
*/
using namespace std;

int main(){
    string str;
    string s="s";
    string s1="es";
    cin>>str;
    int len = str.size()-1;
    if(str[len]=='y'){
        str[len]='i';
        str =str + s1;
    }else if(str[len]=='s'||str[len]=='x'||
             str[len]=='h'&&str[len-1]=='c'||
             str[len]=='h'&&str[len-1]=='s'||
             str[len]=='o'){
         str += s1;
     }else{
         str += s;
     }
     cout<<str<<endl;
    return 0;
}
