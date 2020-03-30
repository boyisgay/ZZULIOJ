#include "stdio.h"

#define N 6

void swap(int *a,int *b);

//�����ð��
void BubbleSort(int a[],int n);
//��ĳ����swap���������Ѿ�����
void BubbleSort_1(int a[],int n);
//��ĳ�����Ѿ���������һ�����迼��
void BubbleSort_2(int a[],int n);

int main()
{
    int a[N];
    for(int i=0;i<N;i++)
        scanf("%d",&a[i]);

    BubbleSort(a,N);

    for(int i=0;i<N;i++)
        printf("%d ",a[i]);
    return 0;
}

//�����ð��
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

//��ĳ����swap���������Ѿ�����
void BubbleSort_1(int a[],int n)
{
    //����һ���Ƿ���������־
    int swap_flag = 1   //����
    for(int i=1;i<n&&swap_flag;i++)
    {
        swap_flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                swap(&a[j],&a[j+1]);
                swap_flag=1;
            }

        }
    }
}

//��ĳ�����Ѿ���������һ�����迼��
void BubbleSort_2(int a[],int n)
{
    //����һ����¼���һ�ν���ʱ��������ǰһ�������±�
    int last_swap_index =n-1;
    for(int i=1;last_swap_index>0;i++)
    {
        int temp = -1;//��ʱ����±�
        for(int j=0;j<last_swap_index;j++)
        {
            if(a[j]<a[j+1])
            {
                swap(&a[j],&a[j+1]);
                temp=j;
            }

        }
        last_swap_index=temp;
    }
}










