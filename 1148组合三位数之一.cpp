#include<stdio.h>
int isWanQuan(int num1, int num2, int num3){   //�ж�1-9�Ƿ�ֻʹ����һ��
	int buf[10] = {0};
	while (num1)
	{
		buf[num1 % 10] = 1;
		num1 /= 10;
	}
	while (num2)
	{
		buf[num2 % 10] = 1;
		num2 /= 10;
	}
	while (num3)
	{
		buf[num3 % 10] = 1;
		num3 /= 10;
	}
	for (int i = 1; i < 10; i++)
	{
		if (buf[i] == 0)
			return 0;
	}
	return 1;
}
int main(){
	int ret[3];
	for (int i = 123; i < 988; i++)   //�ҳ����е���ȫƽ����
    {
        if(i*2<=987&&i*3<=987){
            ret[0]=i;
            ret[1]=i*2;
            ret[2]=i*3;
       // printf("%d %d %d\n",ret[0], ret[1], ret[2]);
        if (isWanQuan(ret[0], ret[1], ret[2])){
					printf("%d %d %d\n",ret[0], ret[1], ret[2]);
        }

    }
}
}
