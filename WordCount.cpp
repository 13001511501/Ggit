#include<stdio.h>

#define IN 1   //�ڵ�����
#define OUT 0   //�ڵ�����
//ͳ������ĵ��������ַ���
int main(void)
{
    char c;
    int state=OUT;
    int numb_row=0,numb_char=0,numb_word=0;
    while((c=getchar())!='\n'){
        numb_char++;
        if(c==' '||c=='\t'||c=='\n')
            state=OUT;
        else if(state==OUT){
            state=IN;
            numb_word++;
        }
    }
    printf("��������%d\n�ַ�����%d\n",numb_word,numb_char);
    
    return 0;
}
