#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>//(引用头文件 - strlen - 计算字符串数量)
#include <windows.h>//Sleep 函数的头文件 -用于休眠
#include <stdlib.h>//---rand函数的实现引用的头文件
#include <time.h>//时间戳

#include <string.h>// string compare - strcmp()头文件；  strcpy - copy string - 拷贝字符串
#include <stdlib.h>// system() - 头文件

//                                                   goto 语句

//理论上goto语句没有必要；
// 但是某些场合下goto语句还是可以用在 - 终止程序在某些深度嵌套的结构的处理过程，例如一次跳出两层或多层循环；
//这种情况使用breal是达不到目的，它只能从内层循环退出到上一层的循环

//goto语句适用范围
//例如：
//for(...)
//for (...)
//{
//	for (...)
//	{
//		if (disaster)
//			goto error;
//	}
//}
//...
//error:
//if(disaster)//处理错误情况

//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;//进入死循环
//	return 0;
//}

//例：关机程序  - 只要运行起来，pc在1min内关机，如果输入：“取消关机”，就取消关机
//在 win+r - cmd 命令提示符中： 
// shutdown -s -t 60  设置关机
//  -s 设置关机；  -t 设置时间关机；   60 为60s后关机
// shutdown -a 取消关机


//int main()
//{
//	//在c语言中提供一个函数： system() 执行系统命令
//
//	char input[20] = { 0 };//存放输入的字符串信息
//	system("shutdown - s - t 60");//system  -  头文件 - <stdio.h>
//
//again:
//	printf("请注意，你的电脑将在一分钟内关机，如果输入：学习UE，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "学习UE") == 0)//两个字符串比较是不能放在一起，如：input == “学习UE”；只能使用stremp() - string compare - 头文件 - <string.h>
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//优化不使用goto语句，可以使用循环语句
//int main()
//{
//	//在c语言中提供一个函数： system() 执行系统命令
//
//	char input[20] = { 0 };//存放输入的字符串信息
//	system("shutdown - s - t 60");//system  -  头文件 - <stdlib.h>
//
//	while (1)
//	{
//		printf("请注意，你的电脑将在一分钟内关机，如果输入：学习UE，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "学习UE") == 0)//两个字符串比较是不能放在一起，如：input == “学习UE”；只能使用stremp() - string compare - 头文件 - <string.h>
//		{
//			system("shutdown -a");
//			break;
//		}
//}
//	return 0;
//}

//goto 语句只能在一个函数范围内跳转，不能跨函数

//void test()
//{
//flag:
//	printf("test\h");
//}
//int main()
//{
//	goto flag;//error
//	return 0;
//}




//                                                                 函数

// 1.库函数  2.自定义函数

//库函数 - 例
//strcpy - copy string - 拷贝字符串
// char * strcpy (char * destination, const char * source)
//                        目的地     <--------     资源
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "welcome to ue";
//	strcpy(arr1, arr2);
//	printf("%s ", arr1);//  %s - 以字符串的格式打印
//	return 0;
//}


//例
// memset  -  memory set - 内存设置 - 头文件<string.h>
//void * memset (void * ptr, int value, size_t num);
//设置内存块：   内存块地址    设置什么    设置几个字节

//int main()
//{
//	char arr[] = "welcome to ue";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}

















