#include<iostream>
#include<cstdio>
#include<string>

//Ŀ����ѧϰ������Ĳ���
//������ɾ�������������룬���...
using namespace std;
#define INSERT 1//insert==0 β�巨��insert==1��ͷ�巨

typedef struct node{
    int data;
   struct node *next;
}Node;

//ͳ���������м�����m��ȵ���
int count(Node* head,int m);
//�ͷ�������ռ�Ŀռ�
void destory(Node* head);
//���������
void display_all(Node* head);


int main(){
    int n,x;//��n����

    #if INSERT==0//β�巨���ص���ÿ�β��붼��tail
    //head����ָ�룬s��ʱ��� �����ݴ���յ����� ��tailβ���
    Node *head=NULL, *s, *tail;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        //����һ����㲢����һƬ�ռ��������ն����ֵ
        s=(Node*)malloc(sizeof(Node));
        s->data = x;

        if(i==0) head=s;//����ǵ�һ�Σ�����headָ��s��
        else tail->next=s;//����ǵڶ�����㣬�����ǰ����һ��tail����s����tail����
        //�������Ĳ���� һ����s��tail�����棬�ٰ�s���tail���
        tail=s;
    }
    //���ݽ��������tail���ָ��null
    tail->next=NULL;

    #else//ͷ�巨  �ص���ÿ�ζ���head�������
    Node *head=NULL,*s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        s = (Node*)malloc(sizeof(Node));
        s->data = x;
        s->next = head;
        head = s;
    }
    #endif

    display_all(head);

    int m;
    cout<<"Ҫ���ص�����:";
    cin>>m;
    cout<<count(head,m);
    return 0;
}

void display_all(Node* head){
    Node* p=head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}


//�����������м�����m��ȵ���
int count(Node* head,int m){
    int c = 0;
    Node *p=head;
    while(p){
        if(p->data==m)
            c++;
        p=p->next;
    }
    return c;
}


//�ͷ�������ռ�Ŀռ�
void destory(Node* head){
    Node *p = head,*q;
    while(p){//p=nullʱ�˳�
        //qָ��p��Ȼ��p��ָ����һ�����
        q=p;
        p=p->next;
        //�ͷ�q
        free(q);
    }
}







