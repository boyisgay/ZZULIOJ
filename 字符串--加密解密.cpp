/*
����4.3������
��Ŀ����:
    Julius Caesar����ʹ�ù��ֺܼ򵥵����롣 ���������е�ÿ���ַ�������ĸ���к�I
5λ����Ӧ���ַ����棬�͵õ������ġ����磬�ַ�A��F���档�� ��������ĺ���������
���Ķ�Ӧ��ϵ:
����: ABCDE FGHIJKL MNOPQRS T UV WX Y Z
����: VWXY Z ABCDE FGHIJKL MNOPQRS T U
    ��������ǶԸ��������Ľ��н��ܣ��õ����ġ���Ҫע����ǣ������г��ֵ���ĸ��
�Ǵ�д��ĸ��������Ҳ��������ĸ���ַ�������Щ�ַ����ý��н��롣
����:
�����еĲ������ݲ�����100�顣ÿ�����ݶ���������ʽ�����Ҹ����������֮��û�пհ׵��С�
һ��������ݰ���������:
1.��ʼ��:һ�У������ַ���"START"��
2.����:һ�У��������ģ����Ĳ�Ϊ�գ��������е��ַ���������200��
3.������:һ�У������ַ���"END"
�����һ���������֮����һ�У������ַ���"ENDOFINPUT��
*/

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
    string str;
    while(getline(cin,str),str!="ENDOFINPUT"){
//        if(str == "ENDOFINPUT"){
//            break;
//        }
        getline(cin,str);
        for(int i=0;i<str.size();i++){
            //����
            str[i] = (str[i] - 'A' -5 + 26) % 26;
        }
        cout<<str<<endl;
        getline(cin,str);//getlint(���뷽ʽ���������) һ�λ��һ��
                         //
    }
}
