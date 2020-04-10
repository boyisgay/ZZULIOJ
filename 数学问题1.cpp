/*
����ת��
GCD&LCM
����
������
����
�߾�������
*/

#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

char int_char(int x){
    if(x<=9)
        return x + '0';
    else
        return x - 10 + 'A';
}
void D_to_m(int n,int m){//ʮ����ת��Ϊm����
    vector<char> x;//���� �ֳ� �ɱ䳤����
    if(n==0)
        x.push_back('0');
    else{
        while(n!=0){
        x.push_back(int_char(n % m));
        n /= m;
        }
    }

    for(int i=x.size()-1;i>=0;i--){
        printf("%c",x[i]);
    }
    printf("\n");
}

int char_int(char ch){
    if(ch<='9')
        return ch - '0';
    else
        return ch - 'A' + 10;
}

int m_to_D(string str,int m){
    int number = 0;
    for(int i=0;i<str.size();i++){
        number *= m;
        number += char_int(str[i]);
    }
    return number;
}
int main(){//m����ת��Ϊn����
    int n,m;
    while(scanf("%d%d",&m,&n)!=EOF){
        string str;
        cin>>str;
        int number = m_to_D(str,m);
        D_to_m(number,n);
    }
    return 0;
}
