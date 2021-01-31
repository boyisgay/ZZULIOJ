/*
����5.6�򵥼�����
��Ŀ����:
����һ��ֻ���� + - * /�ķǸ�����������ʽ������ñ��ʽ��ֵ��
����:
��������������ɲ���������ÿ����������ռһ�У�ÿ�в�����200���ַ���������
�����֮����һ���ո�ָ���û�зǷ����ʽ����һ����ֻ��0ʱ�����������Ӧ�Ľ��
��Ҫ�����
���:
��ÿ�������������һ�У����ñ��ʽ��ֵ����ȷ��С�����2λ��
��������:
1 + 2
4 + 2 * 5 - 71 / 11
0
�������:
3.00
13.36
*/

#include <iostream>
#include <stack>
#include <cstdio>
#include <string>

using namespace std;

//isdigit(str[index]) --ϵͳ����
//--�ж��ǲ������֣��Ƿ���true

int Priority(char c){//�������ȼ�
    if(c=='#')
        return 0;
    else if(c=='$'){
        return 1;
    }else if(c=='+'||c=='-'){
        return 2;
    }else{
        return 3;
    }
}

/*
int&  �������b�Ǳ���a������ ��ô����a��b����
��һ��ֵ�ı䣬����һ��Ҳ��Ӧ�ĸı䣬������һ������ʱ��
����ͬʱʹ֮��ʼ������������������һ��������
*/
double GetNumber(string str,int& index){//��str�л��һ��ֵ
    double number = 0;
    while(isdigit(str[index])){
        number = number * 10 + str[index] - '0';
        index++;
    }
    /*
    �˴��������С�����ж�
    */
    return number;
}

double Calculate(double x,double y,char op){//����
    double result = 0;
    if(op == '+'){
        result = x+y;
    }else if(op == '-'){
        result = x-y;
    }else if(op == '*'){
        result = x*y;
    }else if(op == '/'){
        result = x/y;
    }
    return result;
}


int main(){
    string str;
    while(getline(cin,str)){
        if(str == "0"){
            break;
        }
        int index=0;

        stack<char> oper;
        stack<double> data;

        oper.push('#');
        str = str + '$';
        while(index < str.size()){
            if(str[index]==' '){
                index++;
            }else if(isdigit(str[index])){
                data.push(GetNumber(str,index));
            }else {
                if(Priority(oper.top()) < Priority(str[index])){
                    oper.push(str[index]);
                    index++;
                }else{
                    double y = data.top();
                    data.pop();
                    double x = data.top();
                    data.pop();
                    char op = oper.top();
                    oper.pop();
                    data.push(Calculate(x,y,op));
                }
            }
        }
        printf("%.2f",data.top());
    }
    return 0;
}








