/*
��Ŀ����:
�мҶ���������ֻ����è�͹��������������������������������������ʽ
��һ��Ϊֱ���������ж�������������������ġ�
�ڶ���Ϊѡ�������Ķ�������(è��)�����������ֶ�������������������ġ�
����һ���������д��������¼�������һ��Ԫ��Ϊ1,������ж����������������
����Ԫ��Ϊ����ı�ţ�������������������è������һ��Ԫ��Ϊ2,�������������
����ڶ���Ԫ����Ϊ0�����ȡ��һ��������ʽ;��Ϊ1,��ָ��������;��Ϊ-1,��ָ
������è���밴˳�����������������С������ֲ��Ϸ��Ĳ�������û�п��Է�������Ҫ
��Ķ������������������ԡ�
����:
��һ����n,������������еĴ�������������n�У�ÿ��������ֵm��t���ֱ������Ŀ
�в���������Ԫ�ء�
���:
��˳�����������������У����֮���Կո�����
6
1 1
1 -2
2 0
1 2
2 -1
2 1

*/


#include <cstdio>
#include <iostream>
#include <queue>

using namespace std;
struct Animal{
    int number;//���� >0 --dog  <0 --cat
    int order;//˳��
    Animal(int n,int x):number(n),order(x){}
};

queue<Animal> cat;
queue<Animal> dog;

int main(){
    int n;
    int order = 0;
    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        int m,t;
        scanf("%d%d", &m, &t);
        if(m == 1){//-------------push-----------------
            if(t > 0){//push_dog
                dog.push(Animal( t , order++));
            }else{//push_cat
                cat.push(Animal(t , order++));
            }
        }else{//----------------pop------------------
            if(t == 0 && !dog.empty() && !cat.empty()){
                 //��һ��pop���� ��dog  cat����
                if(dog.front().order > cat.front().order){
                    printf("%d ",dog.front().number);
                    dog.pop();
                }else{
                    printf("%d ",cat.front().number);
                    cat.pop();
                }
            }else if(t == 0 && !dog.empty() && cat.empty()){
                printf("%d ",dog.front().number);
                dog.pop();
            }else if(t == 0 && dog.empty() && !cat.empty()){
                 printf("%d ",cat.front().number);
                 cat.pop();
            }else if(t == 1 && !dog.empty()){//t=1Ҫdog  ����dog
                printf("%d ",dog.front().number);
                dog.pop();
            }else if(t == -1 && !cat.empty()){//t=-1 Ҫcat  ����cat
                 printf("%d ",cat.front().number);
                 cat.pop();
            }
        }
    }
    printf("\n");
    return 0;
}
