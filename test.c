#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int g_val = 2022;


//static int Add(int x, int y)
//{
//	return x + y;
//}




//int main()
//{
//	int a = 50;
//	if (a < 18)
//		printf("child\n");
//	//else if (19 <= a < 30)//error - 正常判断流程为a判断>=19的情况下则已经输出
//	else if(a>=19 && a<30)
//		printf("youth\n");
//	else if()
//		.
//	else if()
//		.
//		.
//	else
//	return 0;
//}

//int main()
//{
//		int num = 6;
//		//if (num = 5)//error -  将num赋值为5 - 需要使用判断 - num == 5
//		if (5 == num)//建议将常量放在左边；
//		return 0;
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if(i % 2 == 1)
//			printf("奇数\n", i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d", m, n);
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//EOF - end of file - 文件结束标志
//get char - 获取一个字符 - 对应键盘输入
//put char - 输出一个字符
//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);等于
//	putchar(ch);
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int password[20] = { 0 };
//	scanf("%d", password);
//	return 0;
//}


//scanf 和 getchar输入函数
//scanf会将输入的字符串从缓冲区拿走，剩下回车\n，最后被getchar函数拿走 - 所以会直接打印确认错误：
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");//error
//	scanf("%s", password);
//	printf("请确认密码(Y/N):>");//error
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}
// 
//修改 - 在scnaf拿走字符串后清理缓冲区
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");//error
//	scanf("%s", password);
//	printf("请确认密码(Y/N):>");//error
//	getchar();//处理\n
//	int ch = getchat();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

//修改
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//当输入的密码存在空格情况，只会将空格前的取走
//	printf("请确认密码(Y/N):>");
//	//getchar();//处理\n
//	//清理缓冲区的多个字符
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d", i);
//	}
//	return 0;
//}




