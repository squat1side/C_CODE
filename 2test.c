#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//(����ͷ�ļ� - strlen - �����ַ�������)
#include <windows.h>//Sleep ������ͷ�ļ� -��������
#include <stdlib.h>//---rand������ʵ�����õ�ͷ�ļ�
#include <time.h>//ʱ���


//                                                      �����ĵ���


//�� - дһ���������ж�һ�����ǲ������� 100 - 200

//int is_prime(int n)
//{
//	//2 -> n-1 ֮���Ƿ�Ϊ����
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}



//дһ�������ж�һ���ǲ������� 1000 - 2000
//һ�����������и�������ͣ�Ĭ�Ϸ���int ����
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//
//}
//
//int mian()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}


//дһ������ʵ��һ��������������Ķ��ֲ���

//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//�Ҳ�����
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ��ͷ����ҵ�λ�õ��±�
//	//�Ҳ�������-1
//	int ret = binary_search(arr, key, sz);  //�����Ʋ���
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//��������ڲ���Ҫ�������ִ�����ĳһԪ�صĸ�����һ�������ⲿ������Ԫ�ظ��������������ʽ������



//дһ��������ÿ����һ������������ͻὫnum��ֵ���ӵ�1

void Add(int*p)//void ����Ҫ�������ͺ���
{
	(*p)++;
}


int main()
{
	int num = 0;
	Add(&num);

	printf("%d ", num);

	Add(&num);
	printf("%d ", num);

	Add(&num);
	printf("%d ", num);

	return 0;
}


















