#include<iostream>
#include<cstdio>
#include<string>
/*
����˼·��
����һ���������⣬���ǽ�����������ǹ���Ҫ�����У�
��ͬ������ǹ��������ڡ����Ҫ���ǲ�׷���
�ȿ�������������һ���ǹ������������ǹ���n����
�ȼ���źã�����n-1���ո�ʣ�µ��ǹ��������ڵ���n-1��
�Ϳ���ʹ������������һ���ǹ��������ڣ�
�ٽ�ʣ�µ��ǹ����������β���֮ǰ�Ѿ��ź��ǹ��Ŀ�϶�У�
�����������Ŀ��Ҫ�����yes��
���ʣ�µ��ǹ�����С��n-1������������һ���ǹ�
һ����������ڵ�״����������no��
*/
using namespace std;

int main(){
    int t,n;
    scanf("%d",&t);
    for(int k=0;k<t;k++){
        scanf("%d",&n);
        int a[n];
        int maxn,index=0;
        scanf("%d",&a[index]);
        maxn = a[index];
        for(int i=1;i<n;i++){
            scanf("%d",&a[i]);
            if(maxn<a[i]){
                maxn = a[i];
                index = i;
            }
        }
        int sum = 0;
        for(int i=0;i<n;i++){
            if(i != index){
                sum += a[i];
            }
        }
        if(sum>=maxn-1){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}
