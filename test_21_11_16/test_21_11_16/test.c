#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%p\n", pa);
//
//
//	return 0;
//}

//
////例如
//#define ADD(a,b) a+b
//int main()
//{
//	int x = 10;
//	int y = 20;
//	printf("%d\n", 4 * ADD(x , y));
//	return 0;
//}




//
////例如
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}




//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}




//创建学生类型
struct students
{
	char name[20];
	int age;
	double score;
};

int main()
{
	struct students a = { "张三" , 18 , 100 };//创建结构体“学生a”并初始化
	struct students b = { "李四" , 20 , 92.5 };//创建结构体“学生b”并初始化
	struct students c = { "王五" , 19 , 97.6 };//创建结构体“学生c”并初始化
	printf("%s %d %lf\n", a.name, a.age, a.score);
	//打印a学生的数据，“.”操作符是用来访问结构体中的成员的
	printf("%s %d %lf\n", b.name, b.age, b.score);
	printf("%s %d %lf\n", c.name, c.age, c.score);
	struct students * pa = &a;//创建指针pa
	printf("%s %d %lf\n", pa->name, pa->age, pa->score);//结构体指针->成员变量名
	printf("%s %d %lf\n", (* pa).name, (* pa).age, (*pa).score);//（*结构体指针）+“.”+成员变量名
	return 0;
}
