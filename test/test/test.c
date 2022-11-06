#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

#define SIZE 5001

int Down(char* c_string, int i_length);
int Judgement(char* c_string, int i_length);

int main(void)

{
    //声明一个数组用来接收字符串
    char c_string[SIZE] = { 0 };

    //获取字符串
    fgets(c_string, 5000, stdin);

    //计算获取的字符串的长度
    int i_length = 0;
    i_length = strlen(c_string);
    c_string[i_length - 1] = 0;
    i_length--;

    //计算字符串最后一个单词的长度
    int i_count = 0;
    i_count = Down(c_string, i_length);

    //输出结果
    printf("%d", i_count);
    return 0;
}

//子函数-计算字符串最后一个单词的长度
int Down(char* c_string, int i_length)
{
    int i_count = 0;
    int i_address = 0;

    //确定最后一个单词的位置
    i_address = Judgement(c_string, i_length);

    //开始计算
    int i_i = 0;
    for (i_i = i_address + 1; i_i < i_length; i_i++)
    {
        i_count++;
    }

    return i_count;
}

//确定最后一个单词的位置
int Judgement(char* c_string, int i_length)
{
    int i_i = 0;
    for (i_i = i_length - 1; i_i > -1; i_i--)
    {
        if (' ' == c_string[i_i])
        {
            return  i_i;
        }
    }

    return  i_i;
}