/*
    lower_bound
    ���ش��ڻ����Ŀ��ֵ�ĵ�һ��λ��
    upper_bound
    ���ش���Ŀ��ֵ�ĵ�һ��λ��

    ���ص��ǵ�ַ
    �Ҳ�������N+1
*/
#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>


using namespace std;

int main()
{
    int n,x;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);//����Ҫ���ҵ�ֵ

    sort(a,a+n);//������

    int position;
    position = lower_bound(a,a+n,x) - a;
    if(position != n && a[position] == x){
            printf("���ҵ�\n");
    }else{
        printf("δ�ҵ�\n");
    }

}
