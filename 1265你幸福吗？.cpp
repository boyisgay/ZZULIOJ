//��һ
//����һ���Ҹ�ָ�����飬��СΪ��������ʼ0
//����ÿһ���ַ��������Ҹ���׼���ж���������  ��ȡ�ַ����е���number
//    �Է�����һ����׼���˵��Ҹ�ָ��+1;
//
//�õ�һ���Ҹ�ָ�����飬����ָ����ߵ��м�����
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//bool cmp(int x,int y){
//    return x>y;
//}
//
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,m;
//        cin>>n>>m;
//        int arr[n];//����Ҹ�ָ��
//        memset(arr,0,n);
//        string str;
//        for(int i=0;i<m;i++){
//            gets(str);
//            int len=strlen(str);
//            int brr=0;//��str�е���
//            if(str[7]=='l'){//left
//                for(int j=0;j<len-15;j++){
//                    brr = brr*10 + str[j+15]-'0';
//                }
//                for(int k=0;k<brr-1;k++)//��left�������Ҹ�+1
//                    arr[k]++;
//            }else if(str[7]=='r'){//right
//                for(int j=0;j<len-16;j++){
//                    brr = brr*10 + str[j+16]-'0';
//                }
//                for(int k=n-1;k>brr-1;k--)//��right�������Ҹ�+1
//                    arr[k]++;
//            }
//        }
//
//        int cnt=0;
//        sort(arr,arr+n,cmp);
//        for(int i=0;i<n;i++){
//            if(arr[i]!=arr[i+1]){
//                cnt++;
//                break;
//            }
//            cnt++;
//        }
//        printf("%d\n",cnt);
//    }
//    return 0;
//}
/*
����
�����������ֽ����޸ģ����Կ����ò��������
    �����������飬����ǰ׺�ͼ���ԭ���飬
        ͳ��ԭ�����и�������m���������������
*/
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
const int N = 1e3 + 10;
int a[N], b[N];
int get_num(string a)  // �õ�����
{
	int sum = 0;
	int len = a.size();
	for(int i = 0; i < len; i++)
		sum = sum * 10 + a[i] - '0';
	return sum;
}
int main(){
	int t;
	cin >> t;
	while (t--)
	{
		memset(a, 0, sizeof a);    //��ղ������
		int n, m;
		cin >> n >> m;
		for(int i = 1; i <= m; i++)
		{
			int flag = 0;
			string s;
			for(int i= 1; i <=5; i++)   //ÿһ�ε����������������
			{                          //���Կ��Է��������
				cin >>s;
				if(s == "left")    //�����left�����
					flag = 1;
			}
			int num = get_num(s);    //�õ���Χ
			if(flag == 1)
				a[1]++, a[num]--;
			else
				a[num + 1]++;
		}
		int cnt = 0;
		for(int i = 1; i <= n; i++)
			b[i] = b[i - 1] + a[i];
		for(int i = 1; i <= n; i++)        //ͳ������Ϊm��
			if(b[i] == m)
				cnt++;
		cout << cnt << endl;
	}
	return 0;
}
