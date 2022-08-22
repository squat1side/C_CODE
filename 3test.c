#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//(引用头文件 - strlen - 计算字符串数量)
#include <windows.h>//Sleep 函数的头文件 -用于休眠
#include <stdlib.h>//---rand函数的实现引用的头文件
#include <time.h>//时间戳


//                                                            函数的嵌套调用和链式访问

//函数可以进行嵌套调用，但不能嵌套定义
//void test3()
//{
//	printf("hehe\n");
//}
//
//int test2()
//{
//	test3();
//	return 0;
//}
//
//
//int main()
//{
//	test2();
//	return 0;
//}


//链式访问
//int main()
//{
//	//1.
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//	////链式访问：把一个函数的返回值作为另一个函数的参数
//	//printf("%d\n", strlen("abc"));
//
//	//2.
//	//char arr1[20] = { 0 };
//	//char arr2[] = "ue";
//
//	//strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//
//	//链式访问
//	//printf("%s\n", strcpy(arr1, arr2));
//
//
//	//printf  打印的是返回字符的个数
//	printf("%d", printf("%d", printf("%d", 43)));
//	//  1  ------    2       <------ 43   --  打印  - 4321
//
//	return 0;
//}


//函数声明：
// 1.
//正常代码运行定义在前，然后再使用
// 2.
//而当定义在后时候买就需要先声明定义函数再使用
// 3.
// 函数的声明一般要放在头文件中
// 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数声明 - 告知
//	int Add(int x, int y);
//
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
////函数的定义，代码的执行是从前到后，执行main函数会发生警告“没有Add的定义”，所以想要在前面使用需要在前面加一个函数声明；
//int Add(int x, int y)
//{
//	return x + y;
//}



//                                                                函数递归

//通常是把一个大型复杂的问题层层转化为一个与原问题相似的规模较小的问题来求解；
//只需少量的程序就可以描述出解题过程所需要的多次计算，大大减少程序的代码量 - 大事化小
//
//int main()
//{
//	printf("hehe\n");
//	main();  //函数的递归 - 自己调用了自己 - 运行后将进入死递归
//	return 0;
//}


//例
//接受一个整型还在（无符号）按照顺序打印它的每一位，如：输入 1234；输出 1 2 3 4；
// 方法一：
//1234 % 10 = 4
//1234 / 10 = 123 % 10 = 3
//123 / 10 = 12 % 10 = 2
//12 /10 = 1 % 10 = 1
//1 / 10 = 0


//方法二： - 递归
//两个必要条件
//1.存在限制条件，当满足这个条件的时候，递归便不再继续
//2.每次递归调用之后越来越接近这个限制条件


//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//取得前端数字如123
//	}
//	printf("%d ", n % 10);//取得最后一位数
//
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	print(num);//print函数可以打印参数部分数字的每一位
//
//	return 0;
//}


//例：无限接近：
//void test(int n)
//{                                       //代码执行到这会出现错误 - Stack overflow 栈溢出
//	if (n < 1000)
//	{
//		test(n + 1);
//	}
//
//}
//int main()
//{
//	test(1);
//
//	return 0;
//}


//内存分为三个区 - 栈区 - 堆区 - 静态区

//栈区 - 局部变量 ， 函数形参   - 临时空间/临时变量

//1.不能死递归，要有跳出条件，每次递归逼近跳出条件
//2.递归层次太深也会出现栈溢出现象


//堆区 - 动态内存分配 - malloc/free , calloc , realloc


//静态区 - 全局变量 ， 静态变量


















