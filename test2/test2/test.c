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
//#include <stdio.h>         //引用文件
//main()
//{
//	int i, j;               //定义循环变量
//	for (i = 100; i <= 200; i++)              //定义从100-200之间的循环数字
//	{
//		for (j = 2; j < i; j++)          //判定条件从(2)---(i-1)之间能否被i整除
//		{
//			if (i % j == 0) break;        //如果可以则跳出循环，不是素数
//		}
//		if (j >= i)                    //如果j>=i则为素数，并输出
//			printf("%d\t", i);     //用表格的形式输出结果
//	}
//}
