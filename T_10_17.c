#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, & b);
//	sum = a + b;
//	printf("sum = %d/n", sum);
//	return 0;
//}


//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//}

//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a , b);
//	printf("%d\n", sum);
//
//	return 0;
//}



//#define MAX 1000
//
//int main()
//{
//	//�����ں��������ڶ���#define MAX 1000
//	printf("%d\n", MAX);
//}


//#define Add(x, y) ((x) + (y))
//
//int main()
//{
//	printf("%d\n", 4*Add(2, 3));
//	return 0;
//}


//int main()
//{
//	int a = 10;//a���ڴ�����Ҫ����ռ� -4���ֽ�
//	printf("%p\n", &a);//%pר��������ӡ��ַ
//	int * pa = &a;//pa��������ŵ�ַ����c��pa��ָ�����//����ָ�����������Ϊ ������ *
//	//* ˵��pa��ָ�����
//	//�磺char ch = 'w';
//	//    char * pc = &ch;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;// * ��������������Ŀ���������� *pa����ͨ��pa����ĵ�ַ���ҵ�a
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}


////����һ��ѧ������
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
////����һ���������
//struct Book
//{
//	char name[20];
//    float price;
//	char id[30];
//};
//int main()
//{
//	struct Stu s = { "����", 20, 85.5 };//�ṹ��Ĵ����ͳ�ʼ��
//	printf("1: %s %d %lf\n", s.name, s.age, s.score);// . �������
//
//	struct Stu* ps = &s;
//	printf("2: %s %d %lf", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3: %s %d %lf", ps->name, ps->age, ps->score);
//
//	return 0;
//}



//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//	
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int m = Max(a, b);
//	printf("%d\n", m);
//	return 0;
//}


//int Sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i = 0;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", Sum(a));
//	}
//}

//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	if (m % 5 == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//
//	return 0;
//}






