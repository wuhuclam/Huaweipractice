#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 5001
//
//int Down(char* c_string, int i_length);
//int Judgement(char* c_string, int i_length);
//
//int main(void)
//
//{
//    //声明一个数组用来接收字符串
//    char c_string[SIZE] = { 0 };
//
//    //获取字符串
//    fgets(c_string, 5000, stdin);
//
//    //计算获取的字符串的长度
//    int i_length = 0;
//    i_length = strlen(c_string);
//    c_string[i_length - 1] = 0;
//    i_length--;
//
//    //计算字符串最后一个单词的长度
//    int i_count = 0;
//    i_count = Down(c_string, i_length);
//
//    //输出结果
//    printf("%d", i_count);
//    return 0;
//}
//
////子函数-计算字符串最后一个单词的长度
//int Down(char* c_string, int i_length)
//{
//    int i_count = 0;
//    int i_address = 0;
//
//    //确定最后一个单词的位置
//    i_address = Judgement(c_string, i_length);
//
//    //开始计算
//    int i_i = 0;
//    for (i_i = i_address + 1; i_i < i_length; i_i++)
//    {
//        i_count++;
//    }
//
//    return i_count;
//}
//
////确定最后一个单词的位置
//int Judgement(char* c_string, int i_length)
//{
//    int i_i = 0;
//    for (i_i = i_length - 1; i_i > -1; i_i--)
//    {
//        if (' ' == c_string[i_i])
//        {
//            return  i_i;
//        }
//    }
//
//    return  i_i;
//}

//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 1001
//
//int main(void)
//{
//    //声明一个数组用来获取字符串
//    char c_string[1002] = { 0 };
//
//    //获取字符串
//    fgets(c_string, 1002, stdin);
//
//    //计算获取的字符串的长度
//    int i_length = 0;
//    i_length = strlen(c_string);
//    c_string[i_length - 1] = 0;
//
//    //获取目标字符串
//    char c_flag = 0;
//    while (c_flag = getchar())
//    {
//        if (c_flag)
//        {
//            break;
//        }
//    }
//
//    //开始统计
//    int i_i = 0;
//    int i_count = 0;
//    for (i_i = 0; i_i < i_length; i_i++)
//    {
//        if ((c_flag >= 65 && c_flag <= 90 || c_flag >= 97 && c_flag <= 122))
//        {
//            if (c_flag == c_string[i_i] || c_flag == c_string[i_i] + 32 || c_flag == c_string[i_i] - 32)
//            {
//                i_count++;
//            }
//        }
//        else
//        {
//            if (c_flag == c_string[i_i])
//            {
//                i_count++;
//            }
//        }
//    }
//
//    //输出结果
//    printf("%d", i_count);
//    return  0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//    //接收一个十六进制
//    int i_number = 0;
//    scanf("%x", &i_number);
//
//    printf("%d", i_number);
//    return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//    //接收一个浮点数
//    float f_number = 0;
//    scanf("%f", &f_number);
//
//    //输出结果
//    if (4.5 != f_number)
//    {
//        printf("%.0f", f_number);
//    }
//    else
//    {
//        printf("5");
//    }
//
//    return 0;
//}

#include <stdio.h>

//int main(void)
//{
//    //声明一个变量用来获取数组的大小
//    int i_size = 0;
//    scanf("%d", &i_size);
//    //printf("%d ", i_size);
//
//    //声明变长二维数组，只有支持c99的编译器才支持变长数组
//    //c11中变为可选项，变长数组不可以初始化
//    int i_number[i_size];
//
//    //获取要查找数的个数
//    int i_k = 0;
//    scanf("%d", &i_k);
//    // printf("%d\n", i_k);
//
//     //获取数组中的数值
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%d", &i_number[i_i]);
//    }
//    // for(i_i = 0; i_i < i_size; i_i++)
//    // {
//    //     printf("%d ", i_number[i_i]);
//    // }
//    // printf("\n");
//
//    //开始查找并输出
//    int i_j = 0;
//    int i_temp = 0;
//    for (i_i = 0; i_i < i_k; i_i++)
//    {
//        for (i_j = i_size - 1; i_j > i_i; i_j--)
//        {
//            if (i_number[i_j] < i_number[i_j - 1])
//            {
//                i_temp = i_number[i_j];
//                i_number[i_j] = i_number[i_j - 1];
//                i_number[i_j - 1] = i_temp;
//            }
//        }
//        printf("%d ", i_number[i_i]);
//    }
//    return  0;
//}

#include <stdio.h>

int main(void)
{
    //声明两个变量获取两个整数
    int i_number_one = 0;
    int i_number_two = 0;
    scanf("%d %d", &i_number_one, &i_number_two);

    //求最大公约数
    int i_a = i_number_one;
    int i_b = i_number_two;
    int i_k = 0;
    while (0 != (i_k = i_a % i_b))
    {
        i_a = i_b;
        i_b = i_k;
    }

    //求最小公倍数
    int i_min = (i_number_one * i_number_two) / i_b;

    //输出结果
    printf("%d", i_min);
    return  0;
}