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
////����
//#define ADD(a,b) a+b
//int main()
//{
//	int x = 10;
//	int y = 20;
//	printf("%d\n", 4 * ADD(x , y));
//	return 0;
//}




//
////����
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




//����ѧ������
struct students
{
	char name[20];
	int age;
	double score;
};

int main()
{
	struct students a = { "����" , 18 , 100 };//�����ṹ�塰ѧ��a������ʼ��
	struct students b = { "����" , 20 , 92.5 };//�����ṹ�塰ѧ��b������ʼ��
	struct students c = { "����" , 19 , 97.6 };//�����ṹ�塰ѧ��c������ʼ��
	printf("%s %d %lf\n", a.name, a.age, a.score);
	//��ӡaѧ�������ݣ���.�����������������ʽṹ���еĳ�Ա��
	printf("%s %d %lf\n", b.name, b.age, b.score);
	printf("%s %d %lf\n", c.name, c.age, c.score);
	struct students * pa = &a;//����ָ��pa
	printf("%s %d %lf\n", pa->name, pa->age, pa->score);//�ṹ��ָ��->��Ա������
	printf("%s %d %lf\n", (* pa).name, (* pa).age, (*pa).score);//��*�ṹ��ָ�룩+��.��+��Ա������
	return 0;
}
