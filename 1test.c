#define  _CRT_SECURE_NO_WARNINGS 1




//                                                     �Զ��庯��

//�⺯��
//char   *    strcpy(char * strDestimation,const char * strSource)
//������������  *   ������ �������Ĳ�����

#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr1[] = { 0 };
//	char arr2[] = "abc";
//	strcpy(arr1, arr2);
//	printf("%s ", arr1);
//
//	return 0;
//}



//��ƺ���
//дһ�������ҳ������������ֵ
//��ƺ��� - get_max()

//int get_max(int x, int y)    //
//{
//	int z = 0;                //
//	if (x > y)
//		z = x;               //  ������
//	else
//		z = y;
//	return z;//�������ֵ
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ĵ���
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//
//	return 0;
//}



//дһ�������������������ε�����
//�����������͵ĵط�д���� void,��ʾ��������������κ�ֵ��Ҳ����Ҫ����
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	printf("����ǰ�� a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("������ a=%d b=%d\n", a, b);
//	return 0;                              
//}
//����ʧ�� - ����x & y �Ƕ����Ŀռ䣬x��y�ĸı䲢����Ӱ��a��b


//����ָ�����洢
////int main()
////{
////	int a = 10;
////	int* pa = &a;//pa��һ��ָ�����
////	*pa = 20;
////	printf("%d\n", a);
////	return 0;
////}

void Swap(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}

int main()
{
	int a = 10;
	int b = 20;
	
	printf("����ǰ�� a=%d b=%d\n", a, b);
	Swap(a, b);
	printf("������ a=%d b=%d\n", a, b);
	return 0;                              
}

































