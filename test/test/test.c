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

#include <stdio.h>

int main(void)
{
    //��������������ȡ��������
    int i_number_one = 0;
    int i_number_two = 0;
    scanf("%d %d", &i_number_one, &i_number_two);

    //�����Լ��
    int i_a = i_number_one;
    int i_b = i_number_two;
    int i_k = 0;
    while (0 != (i_k = i_a % i_b))
    {
        i_a = i_b;
        i_b = i_k;
    }

    //����С������
    int i_min = (i_number_one * i_number_two) / i_b;

    //������
    printf("%d", i_min);
    return  0;
}