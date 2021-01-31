#include <iostream>
#include <cstdio>
#include <string>

#define nixuduishu 0//0�������������  1  �����������

using namespace std;



int arr[100];
int temp[100];
int cnt=0;

#if nixuduishu
int num=0;
#endif

void Combine(int left, int middle, int right){
    printf("����Compare��left = %d,right = %d\n",left,right);
    int i = left;
    int j = middle + 1;
    int k = left;

    while(i<=middle&&j<=right){
        if(arr[i]<=arr[j]){
            temp[k++] = arr[i++];
        }else{
#if nixuduishu
            num += middle-i + 1;
#endif
            temp[k++] = arr[j++];
        }
    }
    while(i<=middle){
        temp[k++] = arr[i++];
    }
    while(j<=right){
        temp[k++] = arr[j++];
    }

    for(k = left;k <=right;k++){
        arr[k] = temp[k];
    }

    for(int i=left;i<=right;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void MergeSort(int left,int right ){
    printf("++++++++%d+++++\n",cnt++);
    if(left<right){
        int middle = left + (right - left) / 2; //����������
        MergeSort(left,middle);
        printf("��MergeSort��left=%d,middle=%d���г�����\n",left,middle);
        MergeSort(middle+1,right);
        printf("��MergeSort��middle+1=%d,right=%d���г�����\n",middle+1,right);

        Combine(left,middle,right);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    MergeSort(0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
#if nixuduishu
     printf("\n%d ",num);
#endif

    return 0;
}
