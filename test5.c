#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>//(����ͷ�ļ� - strlen - �����ַ�������)


//ָ������Ĵ�С

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
////ָ���С��� - 32λ��Ϊ4 - 64 λ��Ϊ8
////ָ���������浵��ַ��
////ָ����Ҫ���ռ�ȡ���ڵ�ַ�Ĵ洢��Ҫ
//	//32λ - 32bit - 4byte
//	//64λ - 64bit - 8byte
//	return 0;
//}



//                                 �ṹ��

//�ṹ�������c���Դ����µ����ͳ���
//����һ��ѧ��
//struct Stu
//{
//	char name[20];//��Ա���� - name age score
//	int age;
//	double score;
//};
////����һ���������
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//int main()
//{
//	struct Stu s = { "����", 20, 85.5 };//�ṹ��Ĵ����ͳ�ʼ��
//	printf("1 : %s %d %lf\n", s.name, s.age, s.score);// . ������ - �ṹ����� . ��Ա����
//
//	//����ָ��洢����ӡ
//	struct Stu * ps = &s;
//	printf("2 : %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	// -> ������
//	printf("3 : %s %d %lf\n", ps->name, ps->age, ps->score);
//
//	return 0;
//}




//��
//#include <stdio.h>
//int num = 10;
//int main()
//{
//	int num = 1;
// //�ֲ���������
//	printf("num = %d\n", num);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = { 'b', 'i', 't' };
//	printf("%d\n", strlen(arr));
//	//�ַ����� \0 ������ֻ�����ַ����������� \0 ����ֹͣ�������ַ�������Ϊ�����
//
//	return 0;
//}


//��ָ������ʱ��[]��ֻ���ǳ���
// ��֧�����鴴��ʱ���ñ���ָ����С����������鲻�ܳ�ʼ��
//�磺 int n = 10; int arr[10] = {0};


//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	//ת���ַ�ֻ������һ���ַ�
//	printf("%d\n", strlen("c:\test\121"));
//
//	return 0;
//}


//���������Ľϴ�ֵ
//дһ�����������������Ľϴ�ֵ
//MAX - һ�㲻����ȫд�ɴ�д
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d\n", m);
//	return 0;
//}


//define ��  include ����Ԥ����ָ��



//#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()//��ʼ
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//}


//switch ��֧���
//switch �����а����ؼ��֣� break default case

//continue ������ѭ�����


//���һ����Ϣ������
//#include <stdio.h>
//int main()
//{
//	printf("����\n");
//	return 0;
//}


//�������һ������M ��1<= M <= 10000);
//�������һ�У�������Ա�5���������YES������NO

//#include <stdio.h>
//int main()
//{
//	//����
//	int m = 0;
//	printf("������һ��������1<= M <= 10000\n");
//	scanf("%d", &m);
//
//	//�жϲ����
//	if (m % 5 == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//	return 0;
//}






