#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>//(引用头文件 - strlen - 计算字符串数量)
#include <windows.h>//Sleep 函数的头文件 -用于休眠


//写一个猜数字游戏
//1.自动产生一个数字
//2.猜数字
// a.猜对了，则恭喜，游戏结束
// b.猜错了，会告诉猜大了，还是猜小了，直到猜对
//3.游戏一直玩，直到退出
//
// 
// 

//开始逻辑
//void menu()
//{
//	printf("*********************************\n");
//	printf("**********    1.play    *********\n");
//	printf("**********    1.exit    *********\n");
//	printf("*********************************\n");
//}

//int main()
//{
//
//	int input = 0;
//	do
//	{
//		menu();//打印菜单
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("猜数字\n");
//		case 2:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//正解
#include <stdlib.h>//---rand函数的实现引用的头文件
#include <time.h>

void menu()
{
	printf("*********************************\n");
	printf("**********    1.play    *********\n");
	printf("**********    1.exit    *********\n");
	printf("*********************************\n");
}
void game()
{
	//猜数字游戏的实现
	//1.生成随机数
	//rand函数返回了一个0-32767的数字;
	//时间 - 时间戳

	int ret = rand() %100;   // %100的余数是0-99，然后+1，范围就是1 - 100
	//printf("%d\n", ret);

	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}

}

int main()
{
	
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();//打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
