#include <cstdio>
#include <iostream>
#include <stack>
//����ȳ�
using namespace std;

int how_use_stack() {
    stack<int> myStack;

    for(int i=0; i < 10; ++ i){
        myStack.push(i);    //��ջ
    }

    int sum=0;
    while ( !myStack.empty()) { //�п�
        printf("%d ",myStack.top());
        sum += myStack.top();   //����ջ��
        myStack.pop();  //��ջ
    }

    printf("\n%d\n", sum);

    return 0;
}

/*
ջ��Ӧ��

    1.�������
    2.����ƥ��
    3.���ʽ��ֵ
*/

/*
��Ŀ����:
��ĳ���ַ���(���Ȳ�����100)���������š������źʹ�Сд��ĸ���涨(�볣��
������ʽ��һ��)�κ�һ�������Ŷ����ڵ����������ұ��Ҿ��������������ƥ�䡣дһ
�������ҵ��޷�ƥ��������ź������ţ����ԭ�����ַ�����������һ�б������ƥ��
�����š�����ƥ�����������"$"��ע������ƥ�����������"?"��ע��
����:
��������������ݣ�ÿ������һ�У�����һ���ַ�����ֻ�����������źʹ�Сд��
ĸ���ַ������Ȳ�����100��
���:
��ÿ��������ݣ�������У���һ�а���ԭʼ�����ַ����ڶ�����"$"?"�Ϳո���ɣ�
"$"��"?"��ʾ��֮��Ӧ�������ź������Ų���ƥ�䡣
��������:
)(ttyt())sss)(
�������:
)(ttyt())sss)(
?           ?$
*/
//����ƥ��
int main__22(){
    stack<int> st;
    string str;
    //string cp_str;
    while(cin>>str){
        string cp_str(str.size(),' ');
        for(int i=0; i < str.size(); i ++){
            if(str[i]=='('){
                st.push(i);
            }else if(str[i]==')' && !st.empty()){
                st.pop();
            }else if(str[i]==')' && st.empty()){
                cp_str[i]=='?';
            }
        }
        while(!st.empty()){
            cp_str[st.top()]='$';
            st.pop();
        }

        cout << str << endl;
        cout << cp_str << endl;
    }
    return 0;
}

//���ʽ��ֵ: 1+2x3-4/5+6



int main(){



}


