#include "stdio.h"
#include "string.h"
//����ʱ��%*s������������֣�����Ϊ��ʵ����Ŀ��
//��while��scanf������=EOF��ʵ�֣�������������%.1lf���������뱣������λ��
int main(){
    double s=0.0,w,p;
    while( scanf("%*s %lf %lf", &w,&p) != EOF ){
        s += w*p;
    }

    printf("%.1f",s);
    return 0;

}
