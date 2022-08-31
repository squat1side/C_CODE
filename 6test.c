#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//scanf 函数头文件
#include <string.h>//(引用头文件 - strlen - 计算字符串数量)
#include <windows.h>//Sleep 函数的头文件 -用于休眠
#include <stdlib.h>//---rand函数的实现引用的头文件
#include <time.h>//时间戳



//                                                          数组作为函数参数

//冒泡排序
//两两相邻的元素进行比较，并且可能的话需要交换
//n - 1 趟冒泡排序

//void bubble_sort(int arr[], int sz)//形参是arr，本质是指针
//{
//	//确定个数
//	//int sz = sizeof(arr) / sizof(arr[0]);//error - 所以不能在构造函数内
//	
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序过程
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//排序为升序
//	
//	//确定个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
////冒泡排序
//	bubble_sort(arr, sz);//数组再传参时候，传递的是数组首元素的地址；
//
//	return 0;
//}



//数组名是什么
//数组名是数组首元素的地址
//存在两个例外：
//1. sizeof（数组名） - 数组名表示整个数组 - 计算整个数组的大小，单位是字节；
//2. & 数组名 - 数组名表示整个数组 - 取出的是整个数组的地址；



int main()
{
	int arr[10] = { 0 };

	printf("%d\n", &arr);//&arr 取出的是数组的地址

	printf("%d\n", arr);
	printf("%d\n", &arr[0]);//数组名是数组首元素的地址

	//int sz = sizeof(arr);//数组名表示整个数组
	//printf("%d\n", sz);


	//printf("%p\n", &arr[0]);
	//printf("%p\n", arr);//数组名是首元素的地址

	return 0;
}






































































