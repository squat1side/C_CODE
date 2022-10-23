#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include<stdlib.h>
#include<time.h>
//void menu()
//{
//	printf("*********************\n");
//	printf("****   1. play   ****\n");
//	printf("****   0. exit   ****\n");
//	printf("*********************\n");
//}
//void game()
//{
//	//1,,生成随机数
//	//rand函数返回的是0-32767之间的随机数字
//
//	int ret = rand()%100+1;//1-100间的随机数
//	//2.猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();//打印菜单
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，退出程序\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default:
//			printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

////大到小
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int ret = 0;
//	if (a < b)
//	{
//		int ret = a;
//		a = b;
//		b = ret;
//	}
//	if (a < c)
//	{
//		int ret = a;
//		a = c;
//		c = ret;
//	}
//	if (b < c)
//	{
//		int ret = b;
//		b = c;
//		c = ret;
//	}
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	if (0 == i % 3)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//	//或
//	//for (i = 3; i <= 100; i += 3)
//	//{
//	//	printf("%d ", i);
//	//}
//	return 0;
//}


//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, & n);
//	int max = 0;
//	//假设最大公约数为max：
//	if (m > n)
//	{
//		max = m;
//	}
//	else
//	{
//		max = n;
//	}
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

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int t = 0;
//	while (m % n)
//	{
//		t = m % n;
//		m = n;
//		n = t;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//if (y % 4 == 0)
//		//{
//		//	if (y != 100)
//		//	{
//		//		printf("%d\n", y);
//		//		count++;
//		//	}
//		//}
//		//if (y % 400 == 0)
//		//{
//		//	printf("%d\n", y);
//		//	count++;
//		//}
//		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		{
//			printf("%d\n", y);
//			count++;
//		}
//	}
//	printf("%\n%d\n", count);
//	return 0;
//}














