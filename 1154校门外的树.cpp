#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int l,m;
        scanf("%d %d",&l,&m);
        //��ɸѡ�� tree[i]=0���� ����1û��
        int tree[l];
        memset(tree,0,sizeof(tree));
        while(m--){
            int a,b;
            scanf("%d %d",&a,&b);
            for(int i=a;i<=b;i++){
                if(tree[i]==0)//�������
                    tree[i]=1;//��������
            }
        }
        //ͳ�ƻ��м�����
        int cnt=0;
        for(int i=0;i<l;i++){
            if(tree[i]==0)
                cnt++;
        }
        printf("%d\n",cnt+1);
    }
    return 0;
}
