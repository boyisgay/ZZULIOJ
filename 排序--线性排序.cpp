#include <iostream>
#include <cstdio>

#include <cstring>
/*
��Ŀ����:
����n���������밴�Ӵ�С��˳���������ǰm�������
����:
�����ж������ݡ�ÿ��������������У���-����������n,m(0<n,m<1000000),��
���а���n��������ͬ���Ҷ���������[-500000 500000]��������
���:
��ÿ��������ݰ��Ӵ�С��˳�����ǰm�������
��������:
5 3
3 -35 92 213 -644
�������:
213 92 3
*/

using namespace std;

const int MAX = 1e6 + 10;// 1*10^6 + 10
const int RANGE = 5e5;// 5*10^5

int arr[MAX];
int number[MAX];

int main(){
    int n , m;
    while(scanf("%d%d",&n,&m)!=EOF){
        memset(number,0,sizeof(number));
        for(int i = 0;i<n;i++){
            scanf("%d",&arr[i]);
            number[RANGE + arr[i] ]  ++;
        }

        int index = 0;
        for(int i=0;i<MAX;i++){
            while(number[i] --){
                arr[index ++] = i - RANGE;
            }
        }
        for(int i= n-1;i >= n - m; i--){
            if(i == n-m){
                printf("%d\n",arr[i]);
            }else{
                printf("%d ",arr[i]);
            }
        }

    }
    return 0;
}
