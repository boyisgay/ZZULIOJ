#include <cstdio>
#include <iostream>
#include <algorithm>
#include <unordered_map>

/*
unordered_map
*/
using namespace std;

unordered_map <int , bool> hashTable;


int main(){
    int n,x;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        hashTable[i]=true;
    }

    scanf("%d",&x);//����Ҫ���ҵ�ֵ


    if(hashTable[x]){
        printf("���ҵ�\n");
    }else{
        printf("δ�ҵ�\n");
    }

    return 0;
}
