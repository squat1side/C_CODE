#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//                                          循环语句： while  ;  for  ;  do while




//                                                                  while语句

//int main()
//{
//	if (1)//将 if 循环换为 while 后将输出一堆hehe进入死循环
//		printf("hehe\n");
//	return 0;
//}


//while 语法结构

//while(表达式)
//    循环语句；

	//break
	// continue
//int main()
//{
//	int i = 1;//                                    初始化
//
//	//在while 循环中，break用于永久的终止循环
//	while (i <= 10)//                               判断部分
//	{
//		if (i == 5)
//			continue;//跳过本次循环continue后面的代码，直接进判断部分，看是否进行下一次循环；如i==5时，跳过循环后进入死循环
//			//break;
//
//		printf("%d ", i);
//		i++;                //                        调整
//	}
//	return 0;
//}


//例

//getchar - 键盘 获取一个字符

// EOF - end of file - 文件结束标志
// 
//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//输出一个字符
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	// ctrl+z   --  getchar 读取结束
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//例
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");// 输入123456
//	scanf("%s", password); //在缓冲区拿走123456
//	printf("请确认密码(Y/N):>");
//	int ch = getchar(); //缓冲区只剩下 \n;所以 ch != Y ,执行else
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}

//解决缓冲区的\n - 清理缓冲区
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password); 
//	printf("请确认密码(Y/N):>");
//
//	//清理缓冲区
//	//getchar();//处理\n   （如果在输入123456 adsdf 的格式密码，则最终还会else）
//
//	//清理缓冲区中的多个字符
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
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
//
//	return 0;
//}

// gerchar , scanf - 输入函数 <----  缓冲区  <----   键盘



//例
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch> '9')// ||  或
//			continue;
//
//		putchar(ch);
//	}
//	return 0;
//}



//                                                                         for 循环

//int main()
//{
//	int i = 1;// 初始化
//
//	while (i <= 10)// 判断部分
//	{
//		printf("%d ", i);
//		i++; // 调整部分
//	}
//	return 0;
//}


// for 循环基本语法结构

//    初始化     判断       调整
//for(表达式1； 表达式2； 表达式3）
//    循环语句

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//		return 0;
//}


// continue 和  break 语句在 for循环中

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		//if (i == 5)
//		//	break;
//
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i)；
//			//
//			//                                 1. 不可以在for循环体内修改循环变量，防止for循环失去控制
//	}
//		return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;//数组是从下标0开始读取
//	for (i = 0; i < 10; i++)    //             2.建议for语句的循环变量的取值采用“前开后闭“区间的写法
//	{
//		printf("%d ", arr[i]);
//	}
//		return 0;
//}


//for 循环的变种

//int main()
//{
//	//判断部分可以省略，但是有情况会导致 - 判断部分恒为真 - 可能会导致死循环
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
			for (j = 0; j < 3; j++)//此次循环走完才能返回上有一个for循环；如果i和j的初始化删除，则只会在内循环中j只执行三次结束
			{
				printf("hehe\n");
			}
	}
		return 0;
}

