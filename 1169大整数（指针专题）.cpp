#include<iostream>
#include<cstdio>
#include<string>

using namespace std;
//���ȿ���λ���ٵ� һ����λ����� С
//Ȼ��Ƚ�λ����ͬ��
//    ��λ�Ƚϣ��Ӹ�λ��ʼ��
//    ��λ���һ����
int cmp(string *a,string *b){

    int len1=a->size();
    int len2=b->size();

    int i=0;
    if(len1>len2)
        return 1;
    if(len2>len1)
        return -1;
    if(len1==len2){
        while(len1--){
            if(a[i]>b[i])
                return 1;
            else if(a[i]<b[i])
                return -1;
            i++;
        }
        return 0;
    }
}


int main(){
    string str1,str2,str3,tempstr;
    cin>>str1>>str2>>str3;

    if(cmp(&str1,&str2)==-1){
        tempstr=str1;str1=str2;str2=tempstr;
    }
    //cout<<str1<<"--"<<str2<<endl;

    if(cmp(&str1,&str3)==-1){
        tempstr=str1;str1=str3;str3=tempstr;
    }
    //cout<<str1<<"--"<<str2<<endl;
    if(cmp(&str2,&str3)==-1){
        tempstr=str2;str2=str3;str3=tempstr;
    }
    //cout<<str2<<"--"<<str3<<endl;

    cout<<str3<<"\n"<<str2<<"\n"<<str1<<endl;
    return 0;
}
