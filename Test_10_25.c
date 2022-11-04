#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//int main()
//{
//	char arr[] = "hello ue";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}


//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//函数不需要返回使用类型为void
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(a, b);
//	printf("a = %d b = %d", a, b);
//	return 0;
//}


//void Swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("a = %d b = %d", a, b);
//	return 0;
//}

int is_prime(int x)
{
	int y = 0;
	for (y = 1; y <= x; y++)
	{
		if(x % y == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}





