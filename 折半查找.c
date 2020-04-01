#include "stdio.h"

int BinSearch(int a[],int n,int x)//����x�����
{
    int left,right,mid;
    left=0;
    right=n-1;

    while(left<=right)
    {
        mid=(left+right)/2;
        if(x==a[mid])
            return mid;
        else if(x<a[mid])
            right=mid-1;
            else left=mid+1;
    }

    return -1;
}

void BubbleSort(int a[],int n)
{
    int i,j,t;
    for(i=1;i<n;i++)
    {//�������� n-1��
        for(j=0;j<=n-1-i;j++)
        {//ÿһ�������������Ƚϣ�
            if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
        }
    }
}

void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int n,x,t;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);//����Ҫ���ҵ�ֵ
    //BubbleSort(a,n);//������
    t = BinSearch(a,n,x);//����x���ҵ�����x����ţ����򷵻�-1��
    if(t==-1)
    printf("δ�ҵ�\n");
    printf("���ҵ���x��λ��Ϊ%d\n",t);
}
