#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;


//���Լɪ������
//�ֱ�ʹ�����������
//����������nֻ����Χ��һ��Ȧѡ��������1��ʼ��m������
//          ��m��������̭��Ȼ����һֻ���Ӵ�1��ʼ��������
//          ���ʣ��һֻ����Ϊ���Ӵ���,����Ǽ��ź���
//1������
/*
int main(){
    int n,m;
    cout<<"������nֻ���Ӻ�����m"<<endl;
    cin>>n>>m;
    int a[n];
    //0��ʾδ����̭��1��ʾ����̭
    memset(a,0,sizeof(a));
    int cnt=1;//����������̭�˼�ֻ
    int j=n-1;
    while(cnt<n){//��̭n-1ֻ����
        int k=0;//������������¼���ӱ�����
        do{
            j=(j+1) % n;//���㱨��m�ĺ��ӵ�λ��
            if(a[j]!=1){//δ����̭��������+1��
                k++;
            }
        }while(k < m);
        a[j]=1;
        cnt++;
        cout<<"��̭��"<<j+1<<endl;
    }

    //�����ҳ����һֻ���ӣ�ע�������±�+1�Ǻ��ӵ����
    for(int i=0;i<n;i++){
        if(a[i]==0){
            cout<<"���Ӵ����ǣ�"<<i+1<<"��"<<endl;
            return 0;
        }
    }
}
*/


//2������

typedef struct node{
    int num;
    node *next;
}node;


int main(){
    node *head =NULL;
    node *tial;
    int n,m;
    cout<<"������nֻ���Ӻ�����m"<<endl;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        node* s=(node*)malloc(sizeof(node));
        s->num=i+1;
        if(i==0) head=s;
        else tial->next=s;
        tial=s;
    }
    tial->next=head;
    int cnt=1;
    node* p=tial;
    while(cnt<n){
        //pָ��Ŀ���ǰһ��
        for(int i=1;i<m;i++){
            p=p->next;
        }
        node *q=p->next;
        p->next=q->next;
        free(q);
        cnt++;
    }
    cout<<"��������"<<p->num<<endl;
}





