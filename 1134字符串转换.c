
#include "stdio.h"
#include "string.h"
//double pow(double x,double y);
//����������������� �����Լ�����һ��int pow

int int_pow(int x,int n)
{
    int t=1;
    for(int i=0;i<n;i++)
    {
        t = t*x;
    }

    return t;
}

int main(){

    int cnt=0,x=0;
    char ch,str[105];
    while(scanf("%c",&ch),ch!='\n'){
        if(ch<='9'&&ch>='0'){
            str[cnt++]=ch;
        }
    }

////    int len = strlen(str);
    for(int i=0;i<cnt;i++){
        x = x + (str[i]-'0') * int_pow(10,cnt-i-1);
    }

    //str[0]-str[cnt-1]�д洢������ �Ӹ�λ����λ

    printf("%d\n",x*2);
    return 0;
}
