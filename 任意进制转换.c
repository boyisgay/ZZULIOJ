#include "stdio.h"
#include "string.h"

int NToD(char *num , int n){
    int weight = 1,d = 0;
    int len = strlen(num);

    for(int i = len-1;i >= 0;i--)
    {//ͨ�����������if  ��charת��Ϊint��
     //ͨ�� d += �Ĳ�������ÿһλ��ˣ�
     // 1101��2�� = 1*2^0 + 0*2^1 + 1*2^2 + 1*2^3 = 13��10��
        if(num[i] <= 'z' && num[i] >= 'a'){
            d += (num[i] - 'a' + 10)*weight;
        }
        else if(num[i] <= 'Z' && num[i] >= 'A'){
            d += (num[i] - 'A' + 10)*weight;
        }
        else if(num[i] <= '9' && num[i] >= '0'){
            d += (num[i] - '0')*weight;
        }
        weight *= n;//������һλ����Ȩֵ��Ϊԭ����n�ġ�
    }
    return d;
}

void DToM(int d,int m,char *mnum){//��ʮ���� d ����m���Ƶ�mnum
    //ʮ���ƻ�����������  շת��� ȡ���� ����
    int len = 0,r;
    do{
        r = d % m;
        if(r>=10)//����Ҫ�����ǲ���ʮ������  ���Ұ�intת��Ϊchar
            mnum[len++] = r - 10 + 'A';
        else
            mnum[len++] = r + '0';
        d /= m;
    }while(d!=0);
    mnum[len] = '\0';

    char t;
    for(int i = 0,j = len-1;i<j;i++,j--){
        t = mnum[i]; mnum[i] = mnum[j]; mnum[j] = t;
    }
}

int main(){

    int N,M;
    char Nnum[20],Mnum[20];

    printf("n  Nnum to M\n");
    scanf("%d %s %d",&N,Nnum,&M);
    int d = NToD(Nnum,N);
    DToM(d,M,Mnum);

    printf("%s",Mnum);

    return 0;
}
