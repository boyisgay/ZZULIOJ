#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int arr[10];

//10���� ������ǰ ż���� ������С  ż��С����
bool compare(int x,int y){
    if(x % 2 == 1 && y % 2 == 1){
        return y<x;
    }
    else if(x % 2 == 0 && y % 2 == 0){
        return x<y;
    }
    else {
        return x % 2 > y % 2;
    }
}
int main(){
    while(scanf("%d",&arr[0])!=EOF){
        for(int i=1;i<10;i++){
            scanf("%d",&arr[i]);
        }

        sort(arr,arr + 10,compare);
    for(int i=0;i<10;i++)
        printf("%d ",arr[i]);
    }
    printf("--------");
    for(int i=0;i<10;i++)
        printf("%d ",arr[i]);
    return 0;
}
// 1 2 3 4 5 6 7 8 9 10
