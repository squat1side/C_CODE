#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//                                          ѭ����䣺 while  ;  for  ;  do while




//                                                                  while���

//int main()
//{
//	if (1)//�� if ѭ����Ϊ while �����һ��hehe������ѭ��
//		printf("hehe\n");
//	return 0;
//}


//while �﷨�ṹ

//while(���ʽ)
//    ѭ����䣻

	//break
	// continue
//int main()
//{
//	int i = 1;//                                    ��ʼ��
//
//	//��while ѭ���У�break�������õ���ֹѭ��
//	while (i <= 10)//                               �жϲ���
//	{
//		if (i == 5)
//			continue;//��������ѭ��continue����Ĵ��룬ֱ�ӽ��жϲ��֣����Ƿ������һ��ѭ������i==5ʱ������ѭ���������ѭ��
//			//break;
//
//		printf("%d ", i);
//		i++;                //                        ����
//	}
//	return 0;
//}


//��

//getchar - ���� ��ȡһ���ַ�

// EOF - end of file - �ļ�������־
// 
//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//���һ���ַ�
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	// ctrl+z   --  getchar ��ȡ����
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//��
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");// ����123456
//	scanf("%s", password); //�ڻ���������123456
//	printf("��ȷ������(Y/N):>");
//	int ch = getchar(); //������ֻʣ�� \n;���� ch != Y ,ִ��else
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	return 0;
//}

//�����������\n - ��������
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password); 
//	printf("��ȷ������(Y/N):>");
//
//	//��������
//	//getchar();//����\n   �����������123456 adsdf �ĸ�ʽ���룬�����ջ���else��
//
//	//���������еĶ���ַ�
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
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
//
//	return 0;
//}

// gerchar , scanf - ���뺯�� <----  ������  <----   ����



//��
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch> '9')// ||  ��
//			continue;
//
//		putchar(ch);
//	}
//	return 0;
//}



//                                                                         for ѭ��

//int main()
//{
//	int i = 1;// ��ʼ��
//
//	while (i <= 10)// �жϲ���
//	{
//		printf("%d ", i);
//		i++; // ��������
//	}
//	return 0;
//}


// for ѭ�������﷨�ṹ

//    ��ʼ��     �ж�       ����
//for(���ʽ1�� ���ʽ2�� ���ʽ3��
//    ѭ�����

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//		return 0;
//}


// continue ��  break ����� forѭ����

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		//if (i == 5)
//		//	break;
//
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i)��
//			//
//			//                                 1. ��������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
//	}
//		return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;//�����Ǵ��±�0��ʼ��ȡ
//	for (i = 0; i < 10; i++)    //             2.����for����ѭ��������ȡֵ���á�ǰ����ա������д��
//	{
//		printf("%d ", arr[i]);
//	}
//		return 0;
//}


//for ѭ���ı���

//int main()
//{
//	//�жϲ��ֿ���ʡ�ԣ�����������ᵼ�� - �жϲ��ֺ�Ϊ�� - ���ܻᵼ����ѭ��
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
			for (j = 0; j < 3; j++)//�˴�ѭ��������ܷ�������һ��forѭ�������i��j�ĳ�ʼ��ɾ������ֻ������ѭ����jִֻ�����ν���
			{
				printf("hehe\n");
			}
	}
		return 0;
}

