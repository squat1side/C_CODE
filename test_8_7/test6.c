#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>//(����ͷ�ļ� - strlen - �����ַ�������)

//C�����ǽṹ���ĳ������ԣ� ˳��ṹ  �� ѡ��ṹ  �� ѭ���ṹ
//c��������һ���ֺ� �������ľ���һ�����



//                               ��֧��䣨ѡ��ṹ��    ��    ѭ����䣨ѭ���ṹ��



//��֧��䣺 if  ;  switch


//                                                                    if  ���


//c��������α�ʾ��ͼ٣�  �� 0 �����棬�� -1  ��  0 ���Ǽ�
//�﷨�ṹ
// 1��  if(���ʽ�����Ϊ����ִ�У�Ϊ����ִ�У�
//         ��䣻

// 2��  if(���ʽ�� ���Ϊ�棩
//         ���1��
//      else
//         ���2��

//���֧
// 3��  if(���ʽ1��
//           ���1��
//      else if(���ʽ2��
//         {  ���2��
//      else
//           ���3��}


//��
//int main()
//{
//	//int age = 10;
//	//if (age >= 18)
//	//	printf("����\n");
//
//	  //if (age >= 18)
//		//printf("����\n");
//		//else
//		//printf("δ����\n");
//
//	//���֧
//	int age = 110;
//	if (age < 18)
//		printf("����\n");
//	else if (age >= 18 && age < 26)//&&����
//		printf("����\n");
//	else if (age >= 26 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else if (age >= 60 && age < 100)
//		printf("����\n");
//	else
//		printf("����\n");
//
//
//
//	return 0;
//}


//else ƥ�䣨�����������Ǹ� if ƥ�䣩 - �������д�͸�ʽ�ǳ���Ҫ

//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a == 1)
//		if (b == 2)
//			printf("haha\n");
//		else
//			printf("hehe\n");
//	return 0;
//}

//�õ���д��ʽ
//int main()
//{
//	int num = 3;
//	//if (num = 5)//�������дһ�� = �����Ƕ�num�ĸ�ֵ������ֱ�ӽ�������д���
//	if (5 == num)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}

//��
//�ж�һ�����Ƿ�Ϊ����
//���1 - 100֮�������
//int main()
//{
//	int num = 15;
//	if (num % 2 == 1)
//		printf("����\n");
//
//	return 0;
//}


//ʹ�� for ѭ��
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d", i);
//	}
//
//	return 0;
//}



//                                                                      switch���
// 
//switch(���ͱ��ʽ)//�ַ�Ҳ����char
//{
//       ����//��һЩ case ���
//case ���ͳ������ʽ��
//     ��䣻
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;//������ֹͣ
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//
//	return 0;
//}


//1-5 ������
//6-7 ��Ϣ��

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	//default �������Ƕ����ԣ���÷������
//	default:
//		printf("�������\n");
//		break;
//	}
//
//	return 0;
//}


//��
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;// m = 3
//	case 2:
//		n++;// n = 2
//	case 3:
//		switch (n)//����Ϊ 2 ��switch ���
//		{
//			//switch ����Ƕ��ʹ��
//		case 1:
//			n++;//���� 
//		case 2:
//			m++;// m = 4
//			n++;// n = 3
//			break;
//		}
//	case 4:
//		m++;// m = 5
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}





