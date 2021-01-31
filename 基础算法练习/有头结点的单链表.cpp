#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

typedef struct node{
    int data;
    struct node *next;
}Node;

void insert(Node *head,int x);
void display(Node* head);
void delete_node(Node* head,int k);
int find_x(Node* head,int x);
void insert_m_to_k(Node* head,int m,int k);


int main(){
    //����һ����ͷ��������
    Node *head;
    head=(Node*)malloc(sizeof(Node));
    head->next=NULL;

    //����n������
    int n,x;
    cout<<"�������ݵĳ��ȣ�";
    cin>>n;
    while(n--){
        insert(head,x);
    }
    display(head);

//    cout<<"����Ҫɾ���ڼ�����";
//    cin>>n;
//    delete_node(head,n);
//    display(head);

//    cout<<"����Ҫ���ҵ�����";
//    cin>>n;
//    cout<<"�����ڵ�"<<find_x(head,n)<<"��"<<endl;
//    display(head);

    cout<<"��m���ڵ�k����㣺";
    cin>>n>>x;
    insert_m_to_k(head,n,x);
    display(head);

    return 0;
}

//����ʵ�ֵ���ͷ�巨
void insert(Node *head,int x){
    //pָ���һ�����
    Node *p=head->next;
    //prepָ��p��ǰһ�����
    Node *prep=head;
    //s����һƬ�ռ���ʱ��������x
    Node *s=(Node*)malloc(sizeof(Node));
    cout<<"����Ҫ��������ݣ�";
    cin>>x;
    s->data=x;
    //s�ڵ�һ���ڵ�ǰ��
    s->next = p;
    //ͷ���ָ��s
    prep->next = s;

    //�ڶ��β����ʱ��p=head-��nextָ�ľ�����һ�ε�s
    //prepָ����Ȼ��ͷ���
    //����������ͷ�巨
}

//��m���뵽��k���ڵ㣨ͷ����ǵ�0����㣩
void insert_m_to_k(Node* head,int m,int k){
    Node* p=head,*q;
    for(int i=1;i<k;i++){
        p=p->next;
    }
    q=p->next;

    Node* s=(Node*)malloc(sizeof(Node));
    s->data=m;

    s->next=q;
    p->next=s;
}


//ɾ����k���ڵ㣬ͷ����ǵ�0�����
void delete_node(Node* head,int k){
    Node* p=head;
    //�����ƶ�����k���ڵ��ǰһ�����
    for(int i=1;i<k;i++){
        p=p->next;
    }
    Node* q=p->next;//qָ���k��
    p->next=q->next;//�õ�k-1��ָ���k+1��
    free(q);//�ͷŵ�k�����
}

//����x�ǵڼ����ڵ�
int find_x(Node* head,int x){
    Node* p=head->next;
    int cnt=1;
    while(1){
        if(p->data==x){
            return cnt;
        }else{
            p=p->next;
            cnt++;
        }
    }
}

//��������ʾ
void display(Node* head){
    //head��ͷ��㣬����head->next�ǵ�һ���ڵ�
    //��һ������ͷ��������һ��
    //��ͷ��������headָ�ľ��ǵ�һ�����
    Node* p=head->next;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
