#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//scanf ����ͷ�ļ�
#include <string.h>//(����ͷ�ļ� - strlen - �����ַ�������)
#include <windows.h>//Sleep ������ͷ�ļ� -��������
#include <stdlib.h>//---rand������ʵ�����õ�ͷ�ļ�
#include <time.h>//ʱ���



//                                                          ������Ϊ��������

//ð������
//�������ڵ�Ԫ�ؽ��бȽϣ����ҿ��ܵĻ���Ҫ����
//n - 1 ��ð������

//void bubble_sort(int arr[], int sz)//�β���arr��������ָ��
//{
//	//ȷ������
//	//int sz = sizeof(arr) / sizof(arr[0]);//error - ���Բ����ڹ��캯����
//	
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð���������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
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
//	//����Ϊ����
//	
//	//ȷ������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
////ð������
//	bubble_sort(arr, sz);//�����ٴ���ʱ�򣬴��ݵ���������Ԫ�صĵ�ַ��
//
//	return 0;
//}



//��������ʲô
//��������������Ԫ�صĵ�ַ
//�����������⣺
//1. sizeof���������� - ��������ʾ�������� - ������������Ĵ�С����λ���ֽڣ�
//2. & ������ - ��������ʾ�������� - ȡ��������������ĵ�ַ��



int main()
{
	int arr[10] = { 0 };

	printf("%d\n", &arr);//&arr ȡ����������ĵ�ַ

	printf("%d\n", arr);
	printf("%d\n", &arr[0]);//��������������Ԫ�صĵ�ַ

	//int sz = sizeof(arr);//��������ʾ��������
	//printf("%d\n", sz);


	//printf("%p\n", &arr[0]);
	//printf("%p\n", arr);//����������Ԫ�صĵ�ַ

	return 0;
}






































































