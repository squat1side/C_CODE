#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>//(����ͷ�ļ� - strlen - �����ַ�������)
#include <windows.h>//Sleep ������ͷ�ļ� -��������


//дһ����������Ϸ
//1.�Զ�����һ������
//2.������
// a.�¶��ˣ���ϲ����Ϸ����
// b.�´��ˣ�����߲´��ˣ����ǲ�С�ˣ�ֱ���¶�
//3.��Ϸһֱ�棬ֱ���˳�
//
// 
// 

//��ʼ�߼�
//void menu()
//{
//	printf("*********************************\n");
//	printf("**********    1.play    *********\n");
//	printf("**********    1.exit    *********\n");
//	printf("*********************************\n");
//}

//int main()
//{
//
//	int input = 0;
//	do
//	{
//		menu();//��ӡ�˵�
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������\n");
//		case 2:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//����
#include <stdlib.h>//---rand������ʵ�����õ�ͷ�ļ�
#include <time.h>

void menu()
{
	printf("*********************************\n");
	printf("**********    1.play    *********\n");
	printf("**********    1.exit    *********\n");
	printf("*********************************\n");
}
void game()
{
	//��������Ϸ��ʵ��
	//1.���������
	//rand����������һ��0-32767������;
	//ʱ�� - ʱ���

	int ret = rand() %100;   // %100��������0-99��Ȼ��+1����Χ����1 - 100
	//printf("%d\n", ret);

	//2.������
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}

}

int main()
{
	
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}
