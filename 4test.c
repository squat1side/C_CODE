#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//scanf ����ͷ�ļ�
#include <string.h>//(����ͷ�ļ� - strlen - �����ַ�������)
#include <windows.h>//Sleep ������ͷ�ļ� -��������
#include <stdlib.h>//---rand������ʵ�����õ�ͷ�ļ�
#include <time.h>//ʱ���


// test

//��
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//��д 1 - 100 �����е������г��ֶ��ٸ�����9��
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}


//���� 1/ 1 - 1/2 + 1/3 - 1/4 + 1/5......+1/99 - 1/100��ֵ
// 1.
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			sum -= 1.0 / i;
//		else
//		    sum += 1.0 / i;
//	}
//	printf("%lf\n", sum);
//
//
//	return 0;
//}
//2.
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i < 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//��10������������  
//int main()
//{
//	int max = 0;
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };  //- ��������Ǹ���������Ͳ�����
//	for (i = 1; i <= 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//���{-1, -2, -3, -4, -5, -6, -7, -8, -9, -10}
//int main()
//{
//	
//	int i = 0;
//	int arr[10] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
//  int max = arr[0];
//	for (i = 1; i <= 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//����Ļ�����9*�˷��ھ���
//1*1=1
//2*1=2 2*2=4
//......

//int main()
//{
//	int i = 1;
//	//�ȴ�ӡ��
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);// %2d ��ӡ��λ�������ÿո���䣬�Ҷ��룻 %-2d���������룻
//		}
//		printf("\n");
//	}
//	return 0;
//}


//ʵ��һ����������ӡ�˷��ھ����磺����9�����9*9�Ŀھ�������12�����12*12
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int  main()
//{
//	int n = 0;
//	scanf("%d", &n);//9
//	//����
//	print_table(n);
//	return 0;
//}



//�����������Ҫ��������ʹ��ȫ�ֱ�����
//����������в������˹��ࣻ


//return ���ܽ�������������������������������
//if
// return;
//else
//return;



//ʵ�εĸ�����
//exec((v1, v2), (v3, v4), v5, v6 ); //���ű��ʽ - (v1, v2)��һ������ = v2  ;  (v3, v4) = v4
// = exec(v2, v4, v5, v6); //�ĸ�ʵ��
















































