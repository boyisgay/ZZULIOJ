#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

//��άָ������

void find(char *name[], int n, int *p)
{
    int i;
    for(i=0;i<n;i++){
        if(strcmp(name[i],name[*p])>0)
            *p=i;
    }
//�ڰ���n���ַ����Ķ�ά�ַ�����name�У�
//����ֵ�����ַ����������±����ָ��p��ָ�ڴ浥Ԫ
}



int main(){
    char str[7];
    char *name[100];
    int i;
    for(i=0;;i++){
        scanf("%s",&str);
        if(strcmp(str,"*****")==0)
            break;
        else {
            name[i]=(char*) malloc(sizeof(char) * (strlen(str)+1));
            strcpy(name[i],str);
        }
    }
    int index=0;
    find(name,i,&index);
    printf("%s\n",name[index]);
    return 0;
}
