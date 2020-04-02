#include "stdio.h"
#include "string.h"

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
    int n,cnt=0,t;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n-cnt;i++)
    {
        t=0;
        scanf("%d",&a[i]);
        for(int j=0;j<i;j++)
            if(a[i]==a[j])
            {
                cnt++;
                t=i;
            }
        if(t)
            i--;
    }

    BubbleSort(a,n-cnt);
    printf("%d\n",n-cnt);
    for(int i=0;i<n-cnt;i++)
        printf("%d ",a[i]);
    return 0;
}
