#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

bool IsZiMu(char ch){
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
        return true;
    else
        return false;
}

int main(){
    string str;
    int n;
    getline(cin,str);//cin������ո�ͻس� ����getline
    cin>>n;
    n=n%26;
    int len = str.size();
    for(int i=0;i<len;i++){
        if(IsZiMu(str[i])){
            if(str[i]>='a'&&str[i]<='z'){//Сд
               // cout<<str[i];
                str[i]=(str[i]-'a'+n)%26+'a';//�������ĸ�ǵڼ����������int
                                             //Ȼ����ƣ���%26�������char
                //cout<<"->"<<str[i]<<endl;
            }else if(str[i]>='A'&&str[i]<='Z'){//��д
                //cout<<str[i];
                str[i]=(str[i]-'A'+n)%26+'A';
               // cout<<"->"<<str[i]<<endl;
            }
        }
    }
    cout<<str<<endl;
    return 0;
}
