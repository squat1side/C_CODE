#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int g_val = 2022;


//static int Add(int x, int y)
//{
//	return x + y;
//}




//int main()
//{
//	int a = 50;
//	if (a < 18)
//		printf("child\n");
//	//else if (19 <= a < 30)//error - �����ж�����Ϊa�ж�>=19����������Ѿ����
//	else if(a>=19 && a<30)
//		printf("youth\n");
//	else if()
//		.
//	else if()
//		.
//		.
//	else
//	return 0;
//}

//int main()
//{
//		int num = 6;
//		//if (num = 5)//error -  ��num��ֵΪ5 - ��Ҫʹ���ж� - num == 5
//		if (5 == num)//���齫����������ߣ�
//		return 0;
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if(i % 2 == 1)
//			printf("����\n", i);
//	}
//
//	return 0;
//}


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
//	default:
//		printf("�������\n");
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d", m, n);
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//EOF - end of file - �ļ�������־
//get char - ��ȡһ���ַ� - ��Ӧ��������
//put char - ���һ���ַ�
//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);����
//	putchar(ch);
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int password[20] = { 0 };
//	scanf("%d", password);
//	return 0;
//}


//scanf �� getchar���뺯��
//scanf�Ὣ������ַ����ӻ��������ߣ�ʣ�»س�\n�����getchar�������� - ���Ի�ֱ�Ӵ�ӡȷ�ϴ���
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");//error
//	scanf("%s", password);
//	printf("��ȷ������(Y/N):>");//error
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}
// 
//�޸� - ��scnaf�����ַ�������������
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");//error
//	scanf("%s", password);
//	printf("��ȷ������(Y/N):>");//error
//	getchar();//����\n
//	int ch = getchat();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}

//�޸�
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//�������������ڿո������ֻ�Ὣ�ո�ǰ��ȡ��
//	printf("��ȷ������(Y/N):>");
//	//getchar();//����\n
//	//���������Ķ���ַ�
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d", i);
//	}
//	return 0;
//}




