#include<iostream>
#include<cstdio>
#include<cstring>
#include <algorithm>
using namespace std;

void sort(int a[], int n, int (*cmp)());
int CmpAsc(int x, int y); /*������Ҫ���ж���Ԫ���Ƿ�����*/
int CmpDec(int x, int y); /*������Ҫ���ж���Ԫ���Ƿ�����*/
int CmpAbsAsc(int x, int y);  /*������ֵ����Ҫ���ж���Ԫ���Ƿ�����*/

int main(void)
{
   int a[10],i,n;
   int slt;

 /*����n��n����������������a*/
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
   /*�����û���ѡ�񣬴���slt; */
    scanf("%d",&slt);

    switch(slt)
   {
     case 1:   sort(a,a+ n, CmpAsc); break;
     case 2:   sort(a, a+n, CmpDec); break;
     case 3:   sort(a, a+n, CmpAbsAsc);break;
   }

   /*�������������*/
    for(int i=0;i<n;i++){
        if(i!=n-1)
            printf("%d ",a[i]);
        else
            printf("%d\n",a[i]);
    }
    return 0;
   }

//void sort(int a[], int n, int (*cmp)())
//{
// /*������a��������ԭ����cmpָ������cmpΪ�棬��ʾ��Ԫ������*/
//for(int )
// }

int CmpAsc(int x, int y)//1s
{
 //���x>y����1�����򷵻�0��
 if(x<y) return 1;
 else return 0;

}

int CmpDec(int x, int y)//2j
{
 //���x<y����1�����򷵻�0��
  if(x>y) return 1;
 else return 0;
}

int CmpAbsAsc(int x, int y)//3s
{
//���abs(x)>abs(y)����1�����򷵻�0
 if(abs(x)<abs(y)) return 1;
 else return 0;
}
