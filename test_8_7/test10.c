#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>//(引用头文件 - strlen - 计算字符串数量)
#include <windows.h>//Sleep 函数的头文件 -用于休眠
#include <stdlib.h>//---rand函数的实现引用的头文件
#include <time.h>//时间戳


//例
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//赋值 i = 5；---死循环
//			printf("%d ", i);
//	}
//	return 0;
//}


//例 -  func(1)
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	return b;
//}
//int main()
//{
//	printf("%d\n", func(1));
//	return 0;
//}

//switch(c)语句中，c可以是int，char，long，但不可以是float，只能是整型

//例
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2) //余 1
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}


//例
//从大到小输出来，写代码将三个整数从大到小输出
//例： 输入 231 输出 321
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int emp = b;
//		b = c;
//		c = emp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}



//例
//打印3的倍数；写一个代码打印1 - 100之间所有3的倍数的数字
// 1.
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//判断
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//2.
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//最大公约数
//给定两个数，求这两个数的最大公约数
//如：输入： 20 40
//输出： 20
//最大公约数是一定小于 20

//1.
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = 0;
//	if (m > n)
//		max = m;
//	else
//		max = n;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数: %d\n", max);
//			break;
//		} 
//		max--;
//	}
//	return 0;
//}

//2.辗转相除法
//  m          n
//  24    %    18   =   6
//  18    %    6    =   0  --- 最大公约数

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int i = 0;
//	while (i=m%n)
//	{
//		m = n;
//		n = i;
//	} 
//	printf("最大公约数: %d\n", i);
//	return 0;
//}



