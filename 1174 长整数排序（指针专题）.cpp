#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
/*��s1ָ�����������s2ָ�������������һ��������;
��s1ָ�������С��s2ָ������������ظ�����;
��s1ָ�����������s2ָ�������������0;*/
int a_greater(char *s1, char *s2)
{

    int len1=strlen(s1);
    int len2=strlen(s2);
    if(len1>len2)
        return 1;
    if(len1<len2)
        return -1;
    if(len1==len2){
        for(int i=0;i<len1;i++){
            if(s1[i]>s2[i]){
                return 1;
            }
            if(s1[i]<s2[i]){
                return -1;
            }
        }
    }
    return 0;
}

char *del(char *str)//ȥ��ǰ��0
{
    char *ch=str;
    int i=0;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i+1]=='\0')
            break;//������Ϊ��ʱ��ʹ�����0
        if(str[i]!='0')
            break;
    }

    ch=&str[i];//�ӵ�i����ʼ����0��
    return ch;
}


int main(){
    int n;
    char *str=NULL;
    char *p[15];
    scanf("%d",&n);
    getchar();
//-----------------------------------------------------
    char *temp=NULL;
    char cparr[105];
//------------------------------------------------------------
    for(int i=0;i<n;i++){
        gets(cparr);
        str=del(cparr);
        p[i]=(char*) malloc( sizeof(char) * (strlen(str) + 1));
        strcpy(p[i],str);
        //printf("%s\n",p[i]);
////----------------------------------------------------------
//
//          int k=0;
//          if(arr[i][k]=='0'){
//            while(arr[i][k]=='0'){
//                k++;
//            }//�ҵ���k���±겻����
//            for(int j=0;k<strlen(arr[i]);k++,j++){
//                cparr[j]=arr[i][k];
//            }
//            cparr[k]='\0';
//            printf("len %d\n",strlen(arr[i]));
//            strcpy(arr[i],cparr);
//
//             printf("len %d\n",strlen(arr[i]));
//        }
//
    }
//---------���Ͻ��ղ�ȥ��ǰ����0��-----------------------------------
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a_greater(p[i],p[j]) > 0){
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
//-----ð������---------------------------------------------------
    for(int i=0;i<n;i++){
        printf("%s\n",p[i]);
    }
//------------------���---------------------------------------------
    return 0;
}
