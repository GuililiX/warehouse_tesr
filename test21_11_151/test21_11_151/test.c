#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
extern int Add(int a, int b);
int main()
{
	int q = 10;
	int w = 20;
	int sum = Add(q, w);
	printf("%d\n", sum );
	return 0;
 }