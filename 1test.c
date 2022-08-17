#define  _CRT_SECURE_NO_WARNINGS 1




//                                                     自定义函数

//库函数
//char   *    strcpy(char * strDestimation,const char * strSource)
//函数返回类型  *   函数名 （函数的参数）

#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr1[] = { 0 };
//	char arr2[] = "abc";
//	strcpy(arr1, arr2);
//	printf("%s ", arr1);
//
//	return 0;
//}



//设计函数
//写一个函数找出两个数的最大值
//设计函数 - get_max()

//int get_max(int x, int y)    //
//{
//	int z = 0;                //
//	if (x > y)
//		z = x;               //  函数体
//	else
//		z = y;
//	return z;//返回最大值
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//
//	return 0;
//}



//写一个函数，交换两个整形的内容
//函数返回类型的地方写出： void,表示这个函数不返回任何值，也不需要返回
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	printf("交换前： a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("交换后： a=%d b=%d\n", a, b);
//	return 0;                              
//}
//交换失败 - 由于x & y 是独立的空间，x和y的改变并不会影响a和b


//利用指针来存储
////int main()
////{
////	int a = 10;
////	int* pa = &a;//pa是一个指针变量
////	*pa = 20;
////	printf("%d\n", a);
////	return 0;
////}

void Swap(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}

int main()
{
	int a = 10;
	int b = 20;
	
	printf("交换前： a=%d b=%d\n", a, b);
	Swap(a, b);
	printf("交换后： a=%d b=%d\n", a, b);
	return 0;                              
}

































