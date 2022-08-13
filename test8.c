#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>//(引用头文件 - strlen - 计算字符串数量)
#include <windows.h>//Sleep 函数的头文件 -用于休眠

//                                                     do...while()循环

//do语法表达式
//
// do
//    循环语句；
// while (表达式）；

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//                                          continue  和  break

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;
//			continue;//死循环 - 执行continue后面的代码省去
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


//test

//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//计算1！+2！+3！+4!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		ret = 1;//计算ret的阶乘前，把ret初始为1
//		for (n = 1; n <= i; n++)
//		{
//			ret *= n;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//例
//1.在一个有序数组中查找具体的某一个数字 n 。


//1.折半查询（以数组的下标折半）
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数字
//	//在arr这个有序数组中查询k(7)的值，数组的查询都是下标查询
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		//  一次查找
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标:%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//
//	return 0;
//}

//           1    ,2    ,3    ,4    ,5    ,6    ,7    ,8    ,9    ,10
//下标    left 0                    mid                            right 9
//如果mid<查找值，则继续向右侧折半查询                             
//                                       mid+1        mid          right 9



//例：编写代码，演示多个字符从两端移动，向中间汇聚
//welcome to UE!!!!!!!
//int main()
//{
//	char arr1[] = "welcome to UE!!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//
//		Sleep(1000);             //睡眠时间间隔 - ms单位
//		system("cls");  //   清空屏幕
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//例
//编写代码实现，模拟用户登录情景，并且只能登录三次。
//（只允许输入三次密码，如果密码正确则提示登陆成功，如果登录三次均输入错误则退出程序)

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//假设 123456789 为正确的密码字符串
//	for (i = 0; i < 3; i++)
//	{
//		printf("输入密码:>");
//		scanf("%s", password);
//		//if (password == "123456789")  // err  -  两个字符串比较，不能使用 == ，应该使用stecmp 函数
//		if (strcmp(password, "123456789") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序\n");
//	}
//	return 0;
//}


