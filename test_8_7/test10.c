#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>//(����ͷ�ļ� - strlen - �����ַ�������)
#include <windows.h>//Sleep ������ͷ�ļ� -��������
#include <stdlib.h>//---rand������ʵ�����õ�ͷ�ļ�
#include <time.h>//ʱ���


//��
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//��ֵ i = 5��---��ѭ��
//			printf("%d ", i);
//	}
//	return 0;
//}


//�� -  func(1)
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	return b;
//}
//int main()
//{
//	printf("%d\n", func(1));
//	return 0;
//}

//switch(c)����У�c������int��char��long������������float��ֻ��������

//��
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2) //�� 1
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}


//��
//�Ӵ�С�������д���뽫���������Ӵ�С���
//���� ���� 231 ��� 321
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int emp = b;
//		b = c;
//		c = emp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}



//��
//��ӡ3�ı�����дһ�������ӡ1 - 100֮������3�ı���������
// 1.
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//�ж�
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//2.
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//���Լ��
//���������������������������Լ��
//�磺���룺 20 40
//����� 20
//���Լ����һ��С�� 20

//1.
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = 0;
//	if (m > n)
//		max = m;
//	else
//		max = n;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ��: %d\n", max);
//			break;
//		} 
//		max--;
//	}
//	return 0;
//}

//2.շת�����
//  m          n
//  24    %    18   =   6
//  18    %    6    =   0  --- ���Լ��

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int i = 0;
//	while (i=m%n)
//	{
//		m = n;
//		n = i;
//	} 
//	printf("���Լ��: %d\n", i);
//	return 0;
//}



