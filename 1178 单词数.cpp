#include<stdio.h>
#include<string.h>
int main(){
    char a[300001],b[100][31],c[100];
    int i,t,j=0,k=0,q=0,w=0,m,n;
    gets(a);
    while(1){
        memset(b,0,sizeof(b));
        t=0;j=0;k=0;
        if(strcmp(a,"#")==0) break;

        for(i=0;i<strlen(a);i++){
                //���ʴ浽b��
            if(a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z')
                b[j][k++]=a[i];
                //��ai��ĸ��ai+1�ǿո���߽�β��������������ʴ�����
            if(a[i]>='A'&&a[i]<='Z'&&a[i+1]==' '
               ||a[i]>='a'&&a[i]<='z'&&a[i+1]==' '
               ||a[i]>='a'&&a[i]<='z'&&a[i+1]=='\0'
               ||a[i]>='A'&&a[i]<='Z'&&a[i+1]=='\0'){
                   j++;k=0;
            }
        }
        //���ˣ����ַ����е����е��ʶ��浽�˶�ά����b��

        m=j;
        for(i=0;i<m-1;i++)
            for(j=0;j<m-i-1;j++)
                if(strcmp(b[j],b[j+1])>0) {
                    strcpy(c,b[j]);
                    strcpy(b[j],b[j+1]);
                    strcpy(b[j+1],c);
                } //ð������ ����ά����b�еĵ�������������   ����ͳ�Ʋ�ͬ�����ĸ�����
        for(i=0;i<m;i++)
            if(strcmp(b[i],b[i+1])!=0) t++;   //ͳ�Ʋ�ͬ�����ĸ���
        printf("%d\n",t);
        gets(a);
    }
    return 0;
}
