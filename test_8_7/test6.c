#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>//(引用头文件 - strlen - 计算字符串数量)

//C语言是结构化的程序语言： 顺序结构  ， 选择结构  ， 循环结构
//c语言中由一个分号 ；隔开的就是一条语句



//                               分支语句（选择结构）    ；    循环语句（循环结构）



//分支语句： if  ;  switch


//                                                                    if  语句


//c语言中如何表示真和假：  非 0 就是真，如 -1  ；  0 就是假
//语法结构
// 1：  if(表达式：如果为真则执行，为假则不执行）
//         语句；

// 2：  if(表达式： 如果为真）
//         语句1；
//      else
//         语句2；

//多分支
// 3：  if(表达式1）
//           语句1；
//      else if(表达式2）
//         {  语句2：
//      else
//           语句3；}


//例
//int main()
//{
//	//int age = 10;
//	//if (age >= 18)
//	//	printf("成年\n");
//
//	  //if (age >= 18)
//		//printf("成年\n");
//		//else
//		//printf("未成年\n");
//
//	//多分支
//	int age = 110;
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age < 26)//&&并且
//		printf("成年\n");
//	else if (age >= 26 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age < 100)
//		printf("老年\n");
//	else
//		printf("百岁\n");
//
//
//
//	return 0;
//}


//else 匹配（和离得最近的那个 if 匹配） - 代码的书写和格式非常重要

//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a == 1)
//		if (b == 2)
//			printf("haha\n");
//		else
//			printf("hehe\n");
//	return 0;
//}

//好的书写格式
//int main()
//{
//	int num = 3;
//	//if (num = 5)//如果少书写一个 = ，则是对num的赋值，可以直接将常数书写左侧
//	if (5 == num)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}

//例
//判断一个数是否为奇数
//输出1 - 100之间的奇数
//int main()
//{
//	int num = 15;
//	if (num % 2 == 1)
//		printf("奇数\n");
//
//	return 0;
//}


//使用 for 循环
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d", i);
//	}
//
//	return 0;
//}



//                                                                      switch语句
// 
//switch(整型表达式)//字符也可以char
//{
//       语句项；//是一些 case 语句
//case 整型常量表达式：
//     语句；
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;//跳出，停止
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//
//	return 0;
//}


//1-5 工作日
//6-7 休息日

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
//	//default 语句放在那都可以，最好放在最后
//	default:
//		printf("输入错误\n");
//		break;
//	}
//
//	return 0;
//}


//例
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;// m = 3
//	case 2:
//		n++;// n = 2
//	case 3:
//		switch (n)//整数为 2 的switch 语句
//		{
//			//switch 允许嵌套使用
//		case 1:
//			n++;//跳过 
//		case 2:
//			m++;// m = 4
//			n++;// n = 3
//			break;
//		}
//	case 4:
//		m++;// m = 5
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}





