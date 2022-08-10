#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>//(引用头文件 - strlen - 计算字符串数量)


//指针变量的大小

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
////指针大小相等 - 32位的为4 - 64 位的为8
////指针是用来存档地址的
////指针需要多大空间取决于地址的存储需要
//	//32位 - 32bit - 4byte
//	//64位 - 64bit - 8byte
//	return 0;
//}



//                                 结构体

//结构体可以让c语言创建新的类型出来
//创建一个学生
//struct Stu
//{
//	char name[20];//成员变量 - name age score
//	int age;
//	double score;
//};
////创建一个书的类型
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//int main()
//{
//	struct Stu s = { "张三", 20, 85.5 };//结构体的创建和初始化
//	printf("1 : %s %d %lf\n", s.name, s.age, s.score);// . 操作符 - 结构体变量 . 成员变量
//
//	//利用指针存储来打印
//	struct Stu * ps = &s;
//	printf("2 : %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	// -> 操作符
//	printf("3 : %s %d %lf\n", ps->name, ps->age, ps->score);
//
//	return 0;
//}




//例
//#include <stdio.h>
//int num = 10;
//int main()
//{
//	int num = 1;
// //局部变量优先
//	printf("num = %d\n", num);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = { 'b', 'i', 't' };
//	printf("%d\n", strlen(arr));
//	//字符串以 \0 结束，只有在字符串最后随机到 \0 才算停止，最终字符串长度为随机数
//
//	return 0;
//}


//在指定数组时候，[]内只能是常量
// 在支持数组创建时候，用变量指定大小，但这个数组不能初始化
//如： int n = 10; int arr[10] = {0};


//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	//转义字符只能算作一个字符
//	printf("%d\n", strlen("c:\test\121"));
//
//	return 0;
//}


//求两个数的较大值
//写一个函数求两个函数的较大值
//MAX - 一般不建议全写成大写
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d\n", m);
//	return 0;
//}


//define 和  include 都是预处理指令



//#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()//开始
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//}


//switch 分支语句
//switch 语言中包含关键字： break default case

//continue 是用于循环语句


//输出一个信息如张三
//#include <stdio.h>
//int main()
//{
//	printf("张三\n");
//	return 0;
//}


//输入包括一个整数M （1<= M <= 10000);
//输出包括一行，如果可以被5整除就输出YES，否则NO

//#include <stdio.h>
//int main()
//{
//	//输入
//	int m = 0;
//	printf("请输入一个整数：1<= M <= 10000\n");
//	scanf("%d", &m);
//
//	//判断并输出
//	if (m % 5 == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//	return 0;
//}






