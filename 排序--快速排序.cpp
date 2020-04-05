#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int arr[100];

int Partition(int left,int right){
    //1 ���ѡ��һ��ֵ
    int random = left + rand() % (right - left);
    //2 �����ѡ���ֵ��left��һ��
    swap(arr[left],arr[random]);
    //3 ���Ǹ����ֵ��Ϊ��׼���Ȼ�׼��ķ����ұߣ��Ȼ�׼С�ķ������
    while(left<right){
        while(left<right&&arr[left]<=arr[right]){
            right--;
        }

        swap(arr[left],arr[right]);
        while(left<right&&arr[left]<=arr[right]){
            left++;
        }

        swap(arr[left],arr[right]);
    }
    return left;//�����±�
}

void QuickSort(int left,int right){
    if(left<right){
        int position = Partition(left,right);
        //����Partition֮�� ��ȷ��arr[position]����ȷ��λ�ã�
        QuickSort(left,position-1);
        QuickSort(position+1, right);
    }

}

//int QuickSort(int left,int right,int k){
//        int position = Partition(left,right);
//        if(position == k-1){
//            return position-1;
//        }else if(position < k-1){
//            return QuickSort(position+1,right,k);
//        }else{
//            return QuickSort(left,position-1,k);
//        }
//}


int main(){
    int n;

//
//    int k;
//    scanf("%d",&k);


    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

//    k = QuickSort(0,n-1,k);
//        printf("%d ",arr[k]);

    QuickSort(0,n-1);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
//4
//4 3 2 1
