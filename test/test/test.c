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
//    //����һ���������������ַ���
//    char c_string[SIZE] = { 0 };
//
//    //��ȡ�ַ���
//    fgets(c_string, 5000, stdin);
//
//    //�����ȡ���ַ����ĳ���
//    int i_length = 0;
//    i_length = strlen(c_string);
//    c_string[i_length - 1] = 0;
//    i_length--;
//
//    //�����ַ������һ�����ʵĳ���
//    int i_count = 0;
//    i_count = Down(c_string, i_length);
//
//    //������
//    printf("%d", i_count);
//    return 0;
//}
//
////�Ӻ���-�����ַ������һ�����ʵĳ���
//int Down(char* c_string, int i_length)
//{
//    int i_count = 0;
//    int i_address = 0;
//
//    //ȷ�����һ�����ʵ�λ��
//    i_address = Judgement(c_string, i_length);
//
//    //��ʼ����
//    int i_i = 0;
//    for (i_i = i_address + 1; i_i < i_length; i_i++)
//    {
//        i_count++;
//    }
//
//    return i_count;
//}
//
////ȷ�����һ�����ʵ�λ��
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
//    //����һ������������ȡ�ַ���
//    char c_string[1002] = { 0 };
//
//    //��ȡ�ַ���
//    fgets(c_string, 1002, stdin);
//
//    //�����ȡ���ַ����ĳ���
//    int i_length = 0;
//    i_length = strlen(c_string);
//    c_string[i_length - 1] = 0;
//
//    //��ȡĿ���ַ���
//    char c_flag = 0;
//    while (c_flag = getchar())
//    {
//        if (c_flag)
//        {
//            break;
//        }
//    }
//
//    //��ʼͳ��
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
//    //������
//    printf("%d", i_count);
//    return  0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//    //����һ��ʮ������
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
//    //����һ��������
//    float f_number = 0;
//    scanf("%f", &f_number);
//
//    //������
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
//    //����һ������������ȡ����Ĵ�С
//    int i_size = 0;
//    scanf("%d", &i_size);
//    //printf("%d ", i_size);
//
//    //�����䳤��ά���飬ֻ��֧��c99�ı�������֧�ֱ䳤����
//    //c11�б�Ϊ��ѡ��䳤���鲻���Գ�ʼ��
//    int i_number[i_size];
//
//    //��ȡҪ�������ĸ���
//    int i_k = 0;
//    scanf("%d", &i_k);
//    // printf("%d\n", i_k);
//
//     //��ȡ�����е���ֵ
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
//    //��ʼ���Ҳ����
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
//    //��������������ȡ��������
//    int i_number_one = 0;
//    int i_number_two = 0;
//    scanf("%d %d", &i_number_one, &i_number_two);
//
//    //�����Լ��
//    int i_a = i_number_one;
//    int i_b = i_number_two;
//    int i_k = 0;
//    while (0 != (i_k = i_a % i_b))
//    {
//        i_a = i_b;
//        i_b = i_k;
//    }
//
//    //����С������
//    int i_min = (i_number_one * i_number_two) / i_b;
//
//    //������
//    printf("%d", i_min);
//    return  0;
//}

//#include <stdio.h>
//
//void Prime_factor(unsigned long long int ulli_number);
//
//int main(void)
//{
//    //����һ������������ȡһ��������ֵ
//    unsigned long long int ulli_number = 0;
//    scanf("%llu", &ulli_number);
//
//    //Ѱ��������
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
//    //����һ���ַ�������������Ŀ���ַ���
//    char c_string[SIZE] = { 0 };
//
//    //��ȡĿ���ַ���,fgets���ȡ�����ַ�
//    fgets(c_string, SIZE, stdin);
//
//    //�����ȡ���ַ�����ʵ�ʳ���
//    int i_length = 0;
//    i_length = strlen(c_string);
//    c_string[i_length - 1] = 0;
//    i_length--;
//
//    //ͳ�Ƶ����в�ͬ����ĸ�ĸ���
//    int i_count = 0;
//    i_count = Statistics(c_string);
//
//    //������
//    printf("%d", i_count);
//    return 0;
//}
//
////ͳ�Ƶ����в�ͬ����ĸ�ĸ���
//int Statistics(char* c_string)
//{
//    int i_count = 0;
//    int i_size = 0;
//    i_size = strlen(c_string);
//    //printf("%d", i_size);
//
//    //�����䳤���飬ֻ��֧��c99�ı�������֧�ֱ䳤����
//    //c11�б�Ϊ��ѡ��䳤���鲻���Խ��г�ʼ��
//    char c_storage[SIZE];
//
//    //���ñ䳤����
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        c_storage[i_i] = 0;
//    }
//
//    //��ʼͳ��
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
//    //����һ��int���͵ı�����������ȡĿ����ֵ
//    int i_number = 0;
//    scanf("%d", &i_number);
//
//    //������ֵ�������
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
////�������
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
//    //��ȡ�䳤����Ĵ�С
//    int i_size = 0;
//    scanf("%d", &i_size);
//
//    //�����䳤����
//    int i_number[i_size];
//
//    //��ȡֵ
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%d", &i_number[i_i]);
//    }
//
//    //��ȡĿ��ֵ
//    int i_flag = 0;
//    scanf("%d", &i_flag);
//
//    //ʹ��qsort
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
//    //������
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
//    //����һ������������ȡ�䳤����Ŀ��
//    int i_x = 0;
//    scanf("%d", &i_x);
//
//    //������ά�䳤���飬ֻ��֧��c99�ı������ű䳤���飬c11�б�Ϊ��ѡ��䳤���鲻���Գ�ʼ��
//    int i_y = 101;
//    char c_string[i_x][i_y];
//
//    //��ȡ�䳤�����е���ֵ
//    int i_i = 0;
//    for (i_i = 0; i_i < i_x; i_i++)
//    {
//        scanf("%s", *(c_string + i_i));
//    }
//
//    //����
//    qsort(c_string,
//        i_x,
//        sizeof(*c_string),
//        Cmp_string);
//
//    //������
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
//    //��ȡһ������
//    int i_number = 0;
//    scanf("%d", &i_number);
//
//    //��ȡ��int���������ڴ��д洢��1�ĸ���
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
//    //��ȡҪ������ӵ��������·�
//    int i_month = 0;
//    scanf("%d", &i_month);
//
//    //����������������ÿ�������ӵ�����
//    int i_number[SIZE] = { 0 };
//
//    //����ֵ
//    i_number[0] = 1;
//    i_number[1] = 1;
//
//    //��ʼ����
//    int i_i = 0;
//    for (i_i = 2; i_i < SIZE; i_i++)
//    {
//        i_number[i_i] = i_number[i_i - 1] + i_number[i_i - 2];
//    }
//
//    //������
//    printf("%d", i_number[i_month - 1]);
//
//    return  0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡ��ʼС�����Ͽ�ƿ������
//    int i_num = 0;
//
//    //��ʼ��ȡ�����ƿ����
//    //������
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
//        //������
//        printf("%d\n", i_count);
//    }
//    return  0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//    //����һ������������ȡ�䳤��ά����ĳ��ȺͿ��
//    int i_size = 0;
//    scanf("%d", &i_size);
//
//    //�����䳤��ά���飬ֻ���Գ�c99�ı�������֧�ֱ䳤���飬
//    //c11�б�Ϊ��ѡ��䳤���鲻���Խ��г�ʼ��
//    int i_number[i_size][i_size];
//
//    //��ʼ�����ά�����е�ֵ
//    int i_i = 0;
//    int i_j = 0;
//    i_number[0][0] = 1;
//    int i_flag = 2;
//    //�������ξ���ĵ�һ��
//    for (i_j = 1; i_j < i_size; i_j++)
//    {
//        i_number[0][i_j] = i_number[0][i_j - 1] + i_flag;
//        i_flag++;
//    }
//    //��ʼ����������
//    for (i_i = 1; i_i < i_size; i_i++)
//    {
//        i_flag = i_i;
//        for (i_j = 0; i_j < i_size; i_j++)
//        {
//            i_number[i_i][i_j] = i_number[i_i - 1][i_j] + i_flag;
//            i_flag++;
//        }
//    }
//    //������ξ���
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
//    //����һ���ַ���������ȡĿ���ַ���
//    char c_string[SIZE] = { 0 };
//
//    //��ȡĿ���ַ���
//    int i_length = 0;
//    fgets(c_string, SIZE, stdin);
//    i_length = strlen(c_string);
//    c_string[i_length - 1] = 0;
//    i_length--;
//
//    //��ʼͳ��
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
//    //������
//    printf("%d\n%d\n%d\n%d", i_letter, i_space, i_number, i_other);
//
//    return  0;
//}

// ������ǵı���
//1.�ռ临�Ӷȹ���
//#include <stdio.h>
//
//int main(void)
//{
//    //������ά�䳤������������������ǵı���,
//    // ֻ��֧��c99�ı�������֧�ֱ䳤���飬c11�б�Ϊ��ѡ��䳤���鲻���Խ��г�ʼ��
//    int i_size_x = 0;
//    scanf("%d", &i_size_x);
//
//    int i_size_y = (2 * i_size_x) - 1;
//
//    int i_number[i_size_x][i_size_y];
//
//    //ͳһ���䳤�����е�ֵ
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
//    //��ȡ�䳤�����е�ֵ
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
//    //����һ������������ȡ�û���Ҫ�жϵ�����
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
//    //������
//    if (i_flag < 0)
//    {
//        printf("%d", i_flag);
//    }
//    else
//    {
//        printf("%d\n", i_flag + 1);
//    }
//
//    //����䳤��ά����
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
//��⣬���ݹ��ɿɷ��֣�ż�����ֵ�λ�÷ֱ��ǣ�-1 -1 2 3 2 4 2 3 2 4 ѭ������
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
