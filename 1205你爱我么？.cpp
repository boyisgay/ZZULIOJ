#include <stdio.h>
#include <stdlib.h>
/*˼·��
�������϶�Ϊ����ʱ���Ż���֡�����
1.sumΪ��������֤���������������ֱ�����
2.sumΪż���������ֿ��ܣ�1��ȫż����ɡ����ֿ��ܾͿ���ֱ���������  2��ż������ɣ���ȥ��С��������������
*/
int main()
{
    int t;

    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int min = 102,sum=0;
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
            sum+=a[i];
            if(a[i]%2!=0&&a[i]<min)
                min = a[i];
        }

        if(sum %2 != 0)
            printf("%d\n",sum);
        else if(min==102)
            printf("0\n");
        else
            printf("%d\n",sum-min);

    }
    return 0;
}
