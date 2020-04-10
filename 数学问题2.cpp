#include <cstdio>
#include <iostream>

using namespace std;

//���Լ��--շת�����
int GCD(int a,int b){
    if(b==0)
        return a;
    else
        return GCD(b,a%b);
}

//��С������LCM(a,b)=(a*b) / GCD(a,b);
int LCM(int a,int b){
    return (a*b) / GCD(a,b);
}


int main(){
    int m,n;
    int r;
    while(scanf("%d%d",&m,&n)!=EOF){
        r = GCD(m,n);
        printf("m=%d��n=%d�����Լ����%d\n",m,n,r);
    }

    return 0;
}
