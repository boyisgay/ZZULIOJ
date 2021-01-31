
typedef struct{
    char *ch;
    int length;
} Str;

//�����㷨

int naive (Str str,Str substr){
    int i = 1 ,j = 1 ,k = i;//iָ������λ�ã�jָ���Ӵ�λ�ã�
                            //�� 1 ��ʼ���±�0���洢����
    while(i <= str.length && j <= substr.length){
        if(str.ch[i] == substr.ch[i]){
            i ++ ;j ++;
        }else{
            j = 1;
            i = ++k;//k�Լ�1��ֵ i�������´ο�ʼƥ���λ��
        }
    }
    if(j > substr.length)
        return k;
    else
        return 0;
}


//KMP
/*
ģʽ���е�j��λ���������е�i��λ�÷�����ƥ��ʱ��Ӧ��
ģʽ���е�next[i]��λ����������i��λ�����¿�ʼ�Ƚϡ�

next[1]Ϊ0��Ϊ�����ǣ���ʾӦ��ģʽ����һ���ַ���
������ǰ��ƥ���ַ�����һ���ַ���ʼ�Ƚ�;
next[j]��ֵΪ  FL��FR  ����+1��
��F���ж�ԡ�FL��FR����ȡ�����һ�ԡ�

*/
void get_next(Str substr, int next[]){
    int j = 1, t = 0;
    next[1] = 0;//�����ǣ���j = next[j] = 0ʱ���� i++
    while(j < substr.length){
        if(t == 0 || substr.ch[j] == substr.ch[t]){
            next[j+1] = t + 1;
            t ++;
            j ++;
        }else{
            t = next[t];
        }
    }
}

int KMP (Str str,Str substr,int next[]){
    int i = 1 ,j = 1 ;//iָ������λ�ã�jָ���Ӵ�λ�ã�
                            //�� 1 ��ʼ���±�0���洢����
    while(i <= str.length && j <= substr.length){
        if(j == 0 || str.ch[i] == substr.ch[i]){
            i ++ ;j ++;/*1ƥ��ʱ���Ƚ���һ��
                       2�� j = next[j] = 0ʱ��Ų�� i��λ��*/
        }else{
            j = next[j];/*����next[]ƥ�䣬����ҪŲ��i��λ�ã�ֻŲ��jָ��λ��
                        ��next[]�д洢�ľ��ǲ�ƥ��ʱ��jҪŲ����λ��*/
        }
    }
    if(j > substr.length)
        return i - substr.length;
    else
        return 0;
}


//KMP�Ż�---�Ľ�next����

void get_nextval(Str substr,int nextval[]){
    int j = 1, t = 0;
    nextval[1] = 0;
    while(j < substr.length){
        if(t == 0 || substr.ch[j] == substr.ch[t]){
            next[j+1] = t + 1;
            if(substr.ch[j+1] != substr.ch[t+1])
                nextval[j+1] = t+1;
            else
                nextval[j+1] = nextval[t+1];
            t ++;
            j ++;
        }else{
            t = nextval[t];
        }
    }
}



