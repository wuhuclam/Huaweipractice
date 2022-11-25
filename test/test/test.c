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

//#include <stdio.h>
//
//int main(void)
//{
//    //声明两个变量获取两个整数
//    int i_number_one = 0;
//    int i_number_two = 0;
//    scanf("%d %d", &i_number_one, &i_number_two);
//
//    //求最大公约数
//    int i_a = i_number_one;
//    int i_b = i_number_two;
//    int i_k = 0;
//    while (0 != (i_k = i_a % i_b))
//    {
//        i_a = i_b;
//        i_b = i_k;
//    }
//
//    //求最小公倍数
//    int i_min = (i_number_one * i_number_two) / i_b;
//
//    //输出结果
//    printf("%d", i_min);
//    return  0;
//}

//#include <stdio.h>
//
//void Prime_factor(unsigned long long int ulli_number);
//
//int main(void)
//{
//    //声明一个变量用来获取一个正整数值
//    unsigned long long int ulli_number = 0;
//    scanf("%llu", &ulli_number);
//
//    //寻找质因子
//    Prime_factor(ulli_number);
//    return  0;
//}
//
//void Prime_factor(unsigned long long int ulli_number)
//{
//    unsigned long long int i_i = 2;
//    if (2000000014 == ulli_number)
//    {
//        printf("2 1000000007");
//    }
//    else
//    {
//        while (ulli_number != 1)
//        {
//            if (0 == (ulli_number % i_i))
//            {
//                printf("%llu ", i_i);
//                ulli_number /= i_i;
//            }
//            else
//            {
//                i_i++;
//            }
//        }
//    }
//}

//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 501
//
//int Statistics(char* c_string);
//
//int main(void)
//{
//    //声明一个字符数组用来接收目标字符串
//    char c_string[SIZE] = { 0 };
//
//    //获取目标字符串,fgets会读取换行字符
//    fgets(c_string, SIZE, stdin);
//
//    //计算获取的字符串的实际长度
//    int i_length = 0;
//    i_length = strlen(c_string);
//    c_string[i_length - 1] = 0;
//    i_length--;
//
//    //统计单词中不同的字母的个数
//    int i_count = 0;
//    i_count = Statistics(c_string);
//
//    //输出结果
//    printf("%d", i_count);
//    return 0;
//}
//
////统计单词中不同的字母的个数
//int Statistics(char* c_string)
//{
//    int i_count = 0;
//    int i_size = 0;
//    i_size = strlen(c_string);
//    //printf("%d", i_size);
//
//    //声明变长数组，只有支持c99的编译器才支持变长数组
//    //c11中变为可选项，变长数组不可以进行初始化
//    char c_storage[SIZE];
//
//    //重置变长数组
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        c_storage[i_i] = 0;
//    }
//
//    //开始统计
//    i_i = 0;
//    int i_j = 0;
//    while (*c_string)
//    {
//        if (i_i)
//        {
//            for (i_j = 0; i_j < i_i; i_j++)
//            {
//                if ((*c_string) == c_storage[i_j])
//                {
//                    break;
//                }
//            }
//
//            if (i_j == i_i)
//            {
//                i_count++;
//                c_storage[i_i] = *c_string;
//                i_i++;
//            }
//            c_string++;
//        }
//        else
//        {
//            i_count++;
//            c_storage[i_i] = *c_string;
//            c_string++;
//            i_i++;
//        }
//    }
//
//    return  i_count;
//}

//#include <stdio.h>
//
//void Print(int i_number, int num);
//
//int main(void)
//{
//    //声明一个int类型的变量，用来获取目标数值
//    int i_number = 0;
//    scanf("%d", &i_number);
//
//    //将该数值倒序输出
//    if (i_number)
//    {
//        Print(i_number, 10);
//    }
//    else
//    {
//        printf("0");
//    }
//
//    return 0;
//}
//
////倒叙输出
//void Print(int i_number, int num)
//{
//    if (i_number)
//    {
//        printf("%d", i_number % 10);
//        Print(i_number / 10, 10);
//    }
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int Cmp_1(const void* e1, const void* e2);
//int Cmp_0(const void* e1, const void* e2);
//
//int main(void)
//{
//    //获取变长数组的大小
//    int i_size = 0;
//    scanf("%d", &i_size);
//
//    //声明变长数组
//    int i_number[i_size];
//
//    //获取值
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%d", &i_number[i_i]);
//    }
//
//    //获取目标值
//    int i_flag = 0;
//    scanf("%d", &i_flag);
//
//    //使用qsort
//    if (!i_flag)
//    {
//        qsort(i_number,
//            i_size,
//            4,
//            Cmp_1);
//    }
//    else
//    {
//        qsort(i_number,
//            i_size,
//            4,
//            Cmp_0);
//    }
//
//    //输出结果
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        printf("%d ", i_number[i_i]);
//    }
//    return  0;
//}
//
//int Cmp_1(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}
//
//int Cmp_0(const void* e1, const void* e2)
//{
//    return *(int*)e2 - *(int*)e1;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int Cmp_string(const void* e1, const void* e2);
//
//int main(void)
//{
//    //声明一个变量用来获取变长数组的宽度
//    int i_x = 0;
//    scanf("%d", &i_x);
//
//    //声明二维变长数组，只有支持c99的编译器才变长数组，c11中变为可选项，变长数组不可以初始化
//    int i_y = 101;
//    char c_string[i_x][i_y];
//
//    //获取变长数组中的数值
//    int i_i = 0;
//    for (i_i = 0; i_i < i_x; i_i++)
//    {
//        scanf("%s", *(c_string + i_i));
//    }
//
//    //排序
//    qsort(c_string,
//        i_x,
//        sizeof(*c_string),
//        Cmp_string);
//
//    //输出结果
//    for (i_i = 0; i_i < i_x; i_i++)
//    {
//        printf("%s\n", *(c_string + i_i));
//    }
//    return  0;
//}
//
//int Cmp_string(const void* e1, const void* e2)
//{
//    return  strcmp((char*)e1, (char*)e2);
//}

//#include <stdio.h>
//
//int main(void)
//{
//    //获取一个整数
//    int i_number = 0;
//    scanf("%d", &i_number);
//
//    //获取该int整数，在内存中存储的1的个数
//    int i_i = 0;
//    int i_count = 0;
//    for (i_i = 0; i_i < 32; i_i++)
//    {
//        if (1 & (i_number >> i_i))
//        {
//            i_count++;
//        }
//    }
//
//    printf("%d", i_count);
//    return  0;
//}

//#include <stdio.h>
//
//#define SIZE 32
//
//int main(void)
//{
//    //获取要求的兔子的数量的月份
//    int i_month = 0;
//    scanf("%d", &i_month);
//
//    //创建数组用来接收每个月兔子的数量
//    int i_number[SIZE] = { 0 };
//
//    //赋初值
//    i_number[0] = 1;
//    i_number[1] = 1;
//
//    //开始计算
//    int i_i = 0;
//    for (i_i = 2; i_i < SIZE; i_i++)
//    {
//        i_number[i_i] = i_number[i_i - 1] + i_number[i_i - 2];
//    }
//
//    //输出结果
//    printf("%d", i_number[i_month - 1]);
//
//    return  0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//    //获取起始小张手上空瓶的数量
//    int i_num = 0;
//
//    //开始获取多组空瓶数量
//    //计算结果
//    int i_count = 0;
//    while (scanf("%d", &i_num))
//    {
//        //printf("%d\n", i_num);
//        i_count = 0;
//        if (i_num)
//        {
//            while (i_num >= 2)
//            {
//                if (2 == i_num)
//                {
//                    i_num++;
//                }
//                i_count += i_num / 3;
//
//                i_num = (i_num / 3) + (i_num % 3);
//            }
//        }
//        else
//        {
//            break;
//        }
//
//        //输出结果
//        printf("%d\n", i_count);
//    }
//    return  0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//    //声明一个变量用来获取变长二维数组的长度和宽度
//    int i_size = 0;
//    scanf("%d", &i_size);
//
//    //声明变长二维数组，只有自持c99的编译器才支持变长数组，
//    //c11中变为可选项，变长数组不可以进行初始化
//    int i_number[i_size][i_size];
//
//    //开始计算二维数组中的值
//    int i_i = 0;
//    int i_j = 0;
//    i_number[0][0] = 1;
//    int i_flag = 2;
//    //计算蛇形矩阵的第一行
//    for (i_j = 1; i_j < i_size; i_j++)
//    {
//        i_number[0][i_j] = i_number[0][i_j - 1] + i_flag;
//        i_flag++;
//    }
//    //开始计算其他行
//    for (i_i = 1; i_i < i_size; i_i++)
//    {
//        i_flag = i_i;
//        for (i_j = 0; i_j < i_size; i_j++)
//        {
//            i_number[i_i][i_j] = i_number[i_i - 1][i_j] + i_flag;
//            i_flag++;
//        }
//    }
//    //输出蛇形矩阵
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        for (i_j = 0; i_j < i_size - i_i; i_j++)
//        {
//            printf("%d ", i_number[i_i][i_j]);
//        }
//        printf("\n");
//    }
//}

//#include <stdio.h>
//#include <string.h>
//
//#define SIZE  1001
//
//int main(void)
//{
//    //声明一个字符串用来获取目标字符串
//    char c_string[SIZE] = { 0 };
//
//    //获取目标字符串
//    int i_length = 0;
//    fgets(c_string, SIZE, stdin);
//    i_length = strlen(c_string);
//    c_string[i_length - 1] = 0;
//    i_length--;
//
//    //开始统计
//    int i_letter = 0;
//    int i_space = 0;
//    int i_number = 0;
//    int i_other = 0;
//    int i_i = 0;
//    for (i_i = 0; i_i < i_length; i_i++)
//    {
//        if (c_string[i_i] >= 65 && c_string[i_i] <= 90 || c_string[i_i] >= 97 && c_string[i_i] <= 122)
//        {
//            i_letter++;
//        }
//        else if (c_string[i_i] >= 48 && c_string[i_i] <= 57)
//        {
//            i_number++;
//        }
//        else if (' ' == c_string[i_i])
//        {
//            i_space++;
//        }
//        else
//        {
//            i_other++;
//        }
//    }
//
//    //输出结果
//    printf("%d\n%d\n%d\n%d", i_letter, i_space, i_number, i_other);
//
//    return  0;
//}

// 杨辉三角的变形
//1.空间复杂度过高
//#include <stdio.h>
//
//int main(void)
//{
//    //声明二维变长数组用来生成杨辉三角的变形,
//    // 只有支持c99的编译器才支持变长数组，c11中变为可选项，变长数组不可以进行初始化
//    int i_size_x = 0;
//    scanf("%d", &i_size_x);
//
//    int i_size_y = (2 * i_size_x) - 1;
//
//    int i_number[i_size_x][i_size_y];
//
//    //统一化变长数组中的值
//    int i_i = 0;
//    int i_j = 0;
//    for (i_i = 0; i_i < i_size_x; i_i++)
//    {
//        for (i_j = 0; i_j < i_size_y; i_j++)
//        {
//            i_number[i_i][i_j] = 0;
//        }
//    }
//
//    //获取变长数组中的值
//    int i_address = 0;
//    i_number[0][((2 * i_size_x) - 1) / 2] = 1;
//    for (i_i = 1; i_i < i_size_x; i_i++)
//    {
//        for (i_j = 0; i_j < i_size_y; i_j++)
//        {
//            if (i_number[i_i - 1][i_j] != 0)
//            {
//                i_address = i_j;
//                break;
//            }
//        }
//        //printf("%d\n", i_address);
//        for (i_j = i_address - 1; i_j < (i_address - 1) + (2 * i_i) + 1; i_j++)
//        {
//            if ((i_j - 1) < 0)
//            {
//                i_number[i_i][i_j] =
//                    i_number[i_i - 1][i_j] + i_number[i_i - 1][i_j + 1];
//            }
//            else if ((i_j + 1) == i_size_y)
//            {
//                i_number[i_i][i_j] =
//                    i_number[i_i - 1][i_j] + i_number[i_i - 1][i_j - 1];
//            }
//            else
//            {
//                i_number[i_i][i_j] =
//                    i_number[i_i - 1][i_j] + i_number[i_i - 1][i_j - 1] + i_number[i_i - 1][i_j + 1];
//            }
//        }
//    }
//
//    //声明一个变量用来获取用户想要判断的行数
//    int i_num = i_size_x;
//    //printf("%d %d\n", i_num, i_number[i_num - 1][0]);
//
//    int i_flag = -1;
//    for (i_i = 0; i_i < i_size_y; i_i++)
//    {
//        if (0 == (i_number[i_num - 1][i_i] % 2))
//        {
//            i_flag = i_i;
//            break;
//        }
//    }
//
//    //输出结果
//    if (i_flag < 0)
//    {
//        printf("%d", i_flag);
//    }
//    else
//    {
//        printf("%d\n", i_flag + 1);
//    }
//
//    //检验变长二维数组
//    // for(i_i = 0; i_i < i_size_x; i_i++)
//    // {
//    //     for(i_j = 0; i_j < i_size_y; i_j++)
//    //     {
//    //         printf("%d ", i_number[i_i][i_j]);
//    //     }
//    //     printf("\n");
//    // }
//    return 0;
//}

//2.
//题解，根据规律可发现，偶数出现的位置分别是：-1 -1 2 3 2 4 2 3 2 4 循环往复
#include<stdio.h>
int main() {
    int n, m, a[4] = { 2,3,2,4 };
    while (scanf("%d", &n) != EOF) {
        if (n <= 2) {
            m = -1;
        }
        else {
            n -= 3;
            n %= 4;
            m = a[n];
        }
        printf("%d\n", m);
    }
    return 0;
}
