#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//�ַ���+ת���ַ�+ע��
//


//                                                         �ַ���


//�ַ�������һ���ַ� - ��˫������������һ���ַ�
// �е���������������Ϊһ���ַ� - ��a��
//"hello xu"  "asdfg"

//int main()
//{
//	"hello xu";
//	"asdfg";
//
//	return 0;
//}


#include <string.h>//(����ͷ�ļ� - strlen - �����ַ�������)

//int main()
//{
	//�ַ����� - ������һ����ͬ���͵�Ԫ��
	//�ַ����ڽ�β��λ��������һ��\0���ַ��������ַ������ַ�����Ϊ�����ַ�+1��\0)
	//\0���ַ����Ľ�����־���������ַ����Ľ������ݣ�
	//char arr[] = "hello";

	//char arr1[] = "abc";//(�ַ��� - 4�ַ���//("abc\0")
	//char arr2[] = { 'a', 'b', 'c' };//�������ַ���//(abc)//����ں������'\0',��������н��������һ��

	//��ӡ�ַ���
		//��֤����
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	// 
	// strlen - ֱ�� \0Ϊֹ
	//���ַ����ĳ��ȣ�1��(\0����Ϊ�ַ����������������������ڣ�
//	int len = strlen("abc");//string length
//	printf("%d\n", len);
//
//	//���ַ������ȣ�2��//strlen ���ַ������� arr2���Ϊ���ֵ���ڵ���λ��ȫΪ���ֵ��ֱ�����ֵΪ \0 ֹͣ
//	printf("%d/n", strlen(arr1));
//	printf("%d/n", strlen(arr2));
//
//	//�ַ����Ľ�����һ�� \0 ��ת���ַ����ڼ����ַ������ȵ�ʱ�� \0 �ǽ�����־���������ַ�������
//	return 0;
//}



//                                                                ת���ַ�


//ת���ַ���ת������ԭ������˼
//����Ļ�ϴ�ӡһ��Ŀ¼��c:\code\test.c
//int main()
//{

	//printf("c:\test\test.c");
	//printf("ab\ncd");//��ת���ַ���\n)

	//printf("(are you ok??)");// ??) - ת�� - ] - ����ĸ�� - (are you ok]
	//printf("(are you ok\?\?");

	//printf("%c\n", 'a');//��� - a
	//printf("%c\n", '\'');//��� - �� ��ת���ַ� - \'

	//printf�ڴ�ӡ����ʱ�򣬿���ָ��ӡ��ʽ
	//printf("%d\n", 100); ��ӡ����
	//printf("%d\n", 'a'); ��ӡ�ַ�
	//printf("%s\n", "abc"); ��ӡ�ַ���

	//printf("%s\n", "abc");//%s - ��ӡ�ַ���
	//printf("%s\n", "\"");//ת���ַ� - \"

	//��ӡ·��c:\test\test.c
	//printf("c:\test\test.c");//ת���ַ� \t - Ϊtable��λ - ˮƽ�Ʊ�� - ��ӡ����Ϊ�ռ�
	//��δ�ӡ��·������� \t ת�� - ��\
	//printf("c:\\test\\test.c");

	//printf("\a\a\a"); //�����ַ� - \a
//	return 0;
//}


	//�ص�ת���ַ� - \ddd - \xdd
	// 
	// \ddd - ddd��ʾ1-3���˽��Ƶ����֣��磺 \130 X

	//int main()
	//{
	//	printf("%s\n", '\130');
	//	return 0;
	//	//X

	//	//1      3      0
	//	//8^2  +  8^1  +  8^0 = 88 - X -- ASCII��ֵ��88
	//}
//��ӡA - 65(ʮ���ƣ� - ת�� - 8���ƣ�101
//int main()
//{
//	printf("%c\n", '\101');
//
//	return 0;
//}
//ASCII���ÿһ���ַ�����һ��ֵ��ASCII��ֵ������A - 65��B - 66;a - 97;.....)



	// \xdd - dd��ʾ2��ʮ���������֡��磺 \x30 0
//int main()
//{
//	printf("%d\n", '\x30');//�ַ� - 0
//	//3          0
//	//16^1  +    16^0   = 48 - ʮ����
//
//	return 0;
//}



//int main()
//{
//	printf("%d\n", strlen("c:\test\test\328.c"));//14���ַ���ת���ַ�Ϊһ��
//
//	return 0;
//}




//                                                 ѡ�����


//int main()
//{
//	int input = 0;//�����ֵ
//	printf("ѧϰ������棺>\n");//\n - ����
//	printf("��Ҫѧϰc������(1/0)?>:");
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("��������Ϸ\n");
//	else
//		printf("ʧ��");
//
//
//	return 0;
//}



//                                                   ѭ�����

//30000���� - ����UE

//int main()
//{
//	int line = 0;
//	while (line < 30000)  //whileѭ��
//	{
//		printf("д����\n", line);g
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("����UE");
//	}
//
//	return 0;
//}



//                                                       ����

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
//	int sum = num1 + num2;
//
//
//	printf("%d\n", sum);
//	return 0;
//}

//������ʽ
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;  //z����ż�����
//	return z;  //�ǰѼ��������أ����/��ֵ���������sum
//}
// 
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
//	int sum = Add(num1�� num2);
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//�ң�����  ���������� 20�� - �������������� 20��
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}






	






