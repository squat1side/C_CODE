#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include<stdlib.h>
#include<time.h>
//void menu()
//{
//	printf("*********************\n");
//	printf("****   1. play   ****\n");
//	printf("****   0. exit   ****\n");
//	printf("*********************\n");
//}
//void game()
//{
//	//1,,���������
//	//rand�������ص���0-32767֮����������
//
//	int ret = rand()%100+1;//1-100��������
//	//2.������
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();//��ӡ�˵�
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ������˳�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default:
//			printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

////��С
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int ret = 0;
//	if (a < b)
//	{
//		int ret = a;
//		a = b;
//		b = ret;
//	}
//	if (a < c)
//	{
//		int ret = a;
//		a = c;
//		c = ret;
//	}
//	if (b < c)
//	{
//		int ret = b;
//		b = c;
//		c = ret;
//	}
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	if (0 == i % 3)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//	//��
//	//for (i = 3; i <= 100; i += 3)
//	//{
//	//	printf("%d ", i);
//	//}
//	return 0;
//}


//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, & n);
//	int max = 0;
//	//�������Լ��Ϊmax��
//	if (m > n)
//	{
//		max = m;
//	}
//	else
//	{
//		max = n;
//	}
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

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int t = 0;
//	while (m % n)
//	{
//		t = m % n;
//		m = n;
//		n = t;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//if (y % 4 == 0)
//		//{
//		//	if (y != 100)
//		//	{
//		//		printf("%d\n", y);
//		//		count++;
//		//	}
//		//}
//		//if (y % 400 == 0)
//		//{
//		//	printf("%d\n", y);
//		//	count++;
//		//}
//		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		{
//			printf("%d\n", y);
//			count++;
//		}
//	}
//	printf("%\n%d\n", count);
//	return 0;
//}














