#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>//(����ͷ�ļ� - strlen - �����ַ�������)


//C�����ṩ�Ĺؼ���
//1.C�����ṩ�ģ������Լ������ؼ���
//2.�������������ؼ���
//���� auto  break  case  char  const  contine  default  do  double    register  return  sizeof   static(��̬�ģ�  switch(��䣩 union(������/������)  ... ...
//auto ���Զ��� - ÿһ���ֲ���������auto���ε�

//register - �Ĵ����ؼ���
//����������ݿ��Դ���ڣ��ڴ���  �� ����  ��Ӳ��  �����ٻ��棨xxx MB)��  �Ĵ���(��С�� --- ������ - ��۱�ߣ��ٶȱ�죬�ռ�ԽС
//int main()
//{
//	//����/Ƶ����ʹ�õ����ݣ�����ڼĴ����У�����Ч��
//	register int num = 100;//����num��ֵ����ڼĴ�����
//
//	return 0;
//}

//define  -  include  -  ���ǹؼ��� -  Ԥ����ָ��



//�ؼ��� - typedef - �����ض���

//typedef unsigned int u_int;
//
//int main()
//{
//	unsigned int num = 100;
// //��ͬ
//	u_int num2 = 100;
//
//	return 0;
//}



//�ؼ��� - static - ��̬�ģ���̬������
//1.static ���ξֲ����� - ���Ըı�ֲ��������������ڣ����ʸı��˱����Ĵ洢���ͣ� - ���¶Ծֲ�����a����static�󣬸ı��������ڣ���test����ִ�к����٣��������ڼ���
//2.����ȫ�ֱ���  -  ʹ�����ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ���.c���ڲ�����ʹ�ã������ļ�����ʹ��
//3.���κ���


//��
//void test()
//{
//	 static int a = 1;
//	a++;
//	printf("%d", a);
//}
////��ʼ
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();//����test����
//		i++;
//	}
//
//	return 0;
//}


//extern�����ⲿ���� - test4��ȫ�ֱ��� - g_val = 2022  -  ���static��ȫ�ֱ���g_val���Σ��򱨴�
//ȫ�ֱ�����������Դ�ļ��ڲ����Ա�ʹ�ã���Ϊȫ�ֱ��������ⲿ��������
//��static���ι���ȫ�ֱ������������ⲿ�������ԣ�����Դ�ļ��Ͳ��ܱ����ӵ���̬��ȫ�ֱ���
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//��������
//static - ���κ�����ʹ����ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����������Դ�ļ��ڲ�ʹ�ã���static����ȫ�ֱ���һ����
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}



//                                                                ����&��


//definr ��һ��Ԥ����ָ��
//1.define�������(������


//#define MAX 1000//�������MAX
//
//int main()
//{
//	printf("%d\n", MAX)��
//
//	return 0;
//}

//2.define�����
//#define ADD(X,Y) X+Y
//int main()
//{
//	//printf("%d\n", ADD(2, 3));// 5
//	//printf("%d\n", 4 * ADD(2, 3));// 4*2+3 = 11
//
//	return 0;
//}

//��εó�20
//#define ADD(X,Y) ((X)+(Y))
//int main()
//{
//	printf("%d\n", 4 * ADD(2, 3));
//	return 0;
//}




//                                                      ָ��

//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ� - 4���ֽ�
//	printf("%p\n", &a);// %p ��ר��������ӡ��ַ��
//	int * pa = &a; //pa ��������ŵ�ַ�ģ���c������pa��ָ�����
//	// * ˵�� pa ��ָ�����
//	//int ˵�� pa ִ�еĶ����� int ���͵�
//
//	//ͬ��� char ����
//	char ch = 'w';
//	char * pc = &ch
//
//	return 0;
//}


//                                                   ָ�����


//ָ��  ����  ��ַ
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20; // * �����ò��� - *pa ����ͨ��pa����ĵ�ַ���ҵ�a
//	printf("%d\n", a);
//
//
//	return 0;
//}
