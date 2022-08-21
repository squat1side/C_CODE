#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//(引用头文件 - strlen - 计算字符串数量)
#include <windows.h>//Sleep 函数的头文件 -用于休眠
#include <stdlib.h>//---rand函数的实现引用的头文件
#include <time.h>//时间戳


//                                                      函数的调用


//例 - 写一个函数来判断一个数是不是素数 100 - 200

//int is_prime(int n)
//{
//	//2 -> n-1 之间是否为素数
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}



//写一个函数判断一年是不是闰年 1000 - 2000
//一个函数如果不懈返回类型，默认返回int 类型
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//
//}
//
//int mian()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}


//写一个函数实现一个整型有序数组的二分查找

//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//找不到了
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到就返回找到位置的下标
//	//找不到返回-1
//	int ret = binary_search(arr, key, sz);  //二进制查找
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了,下标是：%d\n", ret);
//	}
//	return 0;
//}
//如果函数内部需要参数部分传过来某一元素的个数，一定是在外部求好这个元素个数在意参数的形式传进来



//写一个函数，每调用一次这个函数，就会将num的值增加到1

void Add(int*p)//void 不需要返回类型函数
{
	(*p)++;
}


int main()
{
	int num = 0;
	Add(&num);

	printf("%d ", num);

	Add(&num);
	printf("%d ", num);

	Add(&num);
	printf("%d ", num);

	return 0;
}


















