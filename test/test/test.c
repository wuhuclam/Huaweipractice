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