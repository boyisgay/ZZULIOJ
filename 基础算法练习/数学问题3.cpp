#include <cstdio>
#include <iostream>
//#include <cmath>
#include <vector>
//�жϵ������ǲ�������
using namespace std;
//
//bool judge(int n){
//    if(n<2)
//        return false;
//        int bound = sqrt(n);
//    for(int i = 2; i <= bound; i ++){
//        if(n % i==0)
//            return false;
//    }
//    return true;
//}

//һ�������ڵ�����--ɸѡ��
//�����k��������

const int MAXN = 100000;

vector<int> prime;

bool IsPrime[MAXN];

void Initial(){
    //fill(IsPrime,IsPrime+MAXN,true);
    for(int i=0;i<MAXN;i++){//�Ȱ������ڶ���Ϊtrue
        IsPrime[i]=true;
    }

    IsPrime[0]=false;
    IsPrime[1]=false;//0��1����������false

    for(int i=2;i<MAXN;i++){
        if(!IsPrime[i])//���i�������� ��һ��ѭ��
            continue;//��������˳��ִ��
        prime.push_back(i);//������i�ӵ�prime��
        for(int j=i*i;j<MAXN;j += i){//��������i�ı��������Ϊ������
            IsPrime[j]=false;
        }
    }
    return ;
}


int main(){
//    int n;
//    while(scanf("%d",&n)!=EOF){
//        if(judge(n))
//            printf("yes\n");
//        else
//            printf("no\n");
//    }
    int k;
    Initial();
    while(scanf("%d",&k)!=EOF){
        printf("%d",prime[k-1]);
    }
    return 0;
}














