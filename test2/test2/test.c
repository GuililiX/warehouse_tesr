#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
main()
{
	int a, b;
	for (a = 100; a <= 200; a++);
	
	for (b = 2; b < a; b++)
	
	if (a % b == 0)break;

	if (a >= b)
			printf("%d\t", a);
	
}




//
//#include <stdio.h>         //�����ļ�
//main()
//{
//	int i, j;               //����ѭ������
//	for (i = 100; i <= 200; i++)              //�����100-200֮���ѭ������
//	{
//		for (j = 2; j < i; j++)          //�ж�������(2)---(i-1)֮���ܷ�i����
//		{
//			if (i % j == 0) break;        //�������������ѭ������������
//		}
//		if (j >= i)                    //���j>=i��Ϊ�����������
//			printf("%d\t", i);     //�ñ�����ʽ������
//	}
//}
