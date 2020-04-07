/*
��Ŀ����:
��ģʽ�������ı������ж��ٸ���ȫƥ����Ӵ���
����:
��һ�и���n��֮������n��������
���:
ÿ���������ģʽ�����ı������ж��ٸ���ȫƥ����Ӵ�

��������:
3
BAPC
BAPC
AZA
AZAZAZA
VERDI
AVERDXIVYERDIAN
�������:
1
3
0

*/
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

const int MAX = 100;
int next_table[MAX];

void get_next(string sub_str){

    int m = sub_str.size();
    int j = 0;
    next_table[j] = -1;
    int t = next_table[j];
    while(j < m){
        if(t == -1 || sub_str[t] == sub_str[j]){
            t++;
            j++;
            next_table[j] = t;
        }else{
            t = next_table[t];
        }
    }
    return ;
}

int KMP(string str,string sub_str){
    get_next(sub_str);
    int n = str.size();
    int m = sub_str.size();
    int i = 0;
    int j = 0;
    int sum = 0;
    while(i < n ){
        if(j == -1 || str[i] == sub_str[j] ){
            i++;
            j++;
        }else{
            j = next_table[j];
        }
        if(j == m){
            sum ++;
            j = next_table[j];//�����ַ��ظ�ƥ��
                              //����s1=asaƥ��s2=asasasa��s2[2]���˶��
         // j = 0;//�������ַ��ظ�ƥ�䡣
        }
    }
    return sum;
}


int main(){
    int cnt;
    string str;
    string sub_str;
    scanf("%d",&cnt);
    while(cnt--){
        cin>>sub_str;
        cin>>str;

       printf("%d\n", KMP(str,sub_str));
    }

    return 0;
}

