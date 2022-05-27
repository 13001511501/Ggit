#include<stdio.h>

#define IN 1   //在单词内
#define OUT 0   //在单词外
//统计输入的单词数与字符数
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
    printf("单词数：%d\n字符数：%d\n",numb_word,numb_char);
    
    return 0;
}
