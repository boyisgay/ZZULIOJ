#include "stdio.h"
int a[1000000],b[1000000];
/*ջ�ڴ棬ϵͳĬ��ֵΪ���1Mb��
����������1024*1024/4=264144������ջ���
����һ������Ϊȫ�ֱ���  ������������ڶ���*/
int main()
{
    int m,n,i,j,k=0;

    scanf("%d",&m);
    for(i=m-1;i>=0;i--)//��a[i]��������
    scanf("%d",&a[i]);
    scanf("%d",&n);
    for(j=0;j<n;j++)
    scanf("%d",&b[j]);

    int c[m+n],s=0,t=0;
    while(s<m&&t<n)//�����鹲�г���
    {
        if(a[s]>=b[t])
        c[k++]=a[s++];
        else c[k++]=b[t++];
    }

    while(s<m)//a���鳤�ȳ������ಿ��
    c[k++]=a[s++];
    while(t<n)//b���鳤�ȳ������ಿ��
    c[k++]=b[t++];

    for(k=0;k<m+n-1;k++)
    printf("%d ",c[k]);
    printf("%d",c[m+n-1]);
    return 0;
}
