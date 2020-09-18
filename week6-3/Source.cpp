#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void swap(int* a ,int* b)
{
	int sum;
	sum = *a;
	*a = *b;
	*b = sum;
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	swap(&a,&b);
	printf("%d %d", a, b);

	return 0;
}
