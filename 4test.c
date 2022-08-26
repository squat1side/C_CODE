#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//scanf 函数头文件
#include <string.h>//(引用头文件 - strlen - 计算字符串数量)
#include <windows.h>//Sleep 函数的头文件 -用于休眠
#include <stdlib.h>//---rand函数的实现引用的头文件
#include <time.h>//时间戳


// test

//例
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//编写 1 - 100 中所有的整数中出现多少个数字9；
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}


//计算 1/ 1 - 1/2 + 1/3 - 1/4 + 1/5......+1/99 - 1/100的值
// 1.
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			sum -= 1.0 / i;
//		else
//		    sum += 1.0 / i;
//	}
//	printf("%lf\n", sum);
//
//
//	return 0;
//}
//2.
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i < 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//求10个整数中最大的  
//int main()
//{
//	int max = 0;
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };  //- 但如果都是负数的情况就不可行
//	for (i = 1; i <= 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//如果{-1, -2, -3, -4, -5, -6, -7, -8, -9, -10}
//int main()
//{
//	
//	int i = 0;
//	int arr[10] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
//  int max = arr[0];
//	for (i = 1; i <= 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//在屏幕上输出9*乘法口诀：
//1*1=1
//2*1=2 2*2=4
//......

//int main()
//{
//	int i = 1;
//	//先打印行
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);// %2d 打印两位，不过用空格填充，右对齐； %-2d则就是左对齐；
//		}
//		printf("\n");
//	}
//	return 0;
//}


//实现一个函数，打印乘法口诀表，如：输入9，输出9*9的口诀表，输入12，输出12*12
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int  main()
//{
//	int n = 0;
//	scanf("%d", &n);//9
//	//函数
//	print_table(n);
//	return 0;
//}



//函数在设计中要尽可能少使用全局变量；
//函数在设计中参数不宜过多；


//return 不能将函数处理的两个结果返回主调函数：
//if
// return;
//else
//return;



//实参的个数：
//exec((v1, v2), (v3, v4), v5, v6 ); //逗号表达式 - (v1, v2)是一个参数 = v2  ;  (v3, v4) = v4
// = exec(v2, v4, v5, v6); //四个实参
















































