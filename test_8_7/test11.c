#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>//(����ͷ�ļ� - strlen - �����ַ�������)
#include <windows.h>//Sleep ������ͷ�ļ� -��������
#include <stdlib.h>//---rand������ʵ�����õ�ͷ�ļ�
#include <time.h>//ʱ���

#include <string.h>// string compare - strcmp()ͷ�ļ���  strcpy - copy string - �����ַ���
#include <stdlib.h>// system() - ͷ�ļ�

//                                                   goto ���

//������goto���û�б�Ҫ��
// ����ĳЩ������goto��仹�ǿ������� - ��ֹ������ĳЩ���Ƕ�׵Ľṹ�Ĵ�����̣�����һ�������������ѭ����
//�������ʹ��breal�Ǵﲻ��Ŀ�ģ���ֻ�ܴ��ڲ�ѭ���˳�����һ���ѭ��

//goto������÷�Χ
//���磺
//for(...)
//for (...)
//{
//	for (...)
//	{
//		if (disaster)
//			goto error;
//	}
//}
//...
//error:
//if(disaster)//����������

//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;//������ѭ��
//	return 0;
//}

//�����ػ�����  - ֻҪ����������pc��1min�ڹػ���������룺��ȡ���ػ�������ȡ���ػ�
//�� win+r - cmd ������ʾ���У� 
// shutdown -s -t 60  ���ùػ�
//  -s ���ùػ���  -t ����ʱ��ػ���   60 Ϊ60s��ػ�
// shutdown -a ȡ���ػ�


//int main()
//{
//	//��c�������ṩһ�������� system() ִ��ϵͳ����
//
//	char input[20] = { 0 };//���������ַ�����Ϣ
//	system("shutdown - s - t 60");//system  -  ͷ�ļ� - <stdio.h>
//
//again:
//	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������룺ѧϰUE����ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "ѧϰUE") == 0)//�����ַ����Ƚ��ǲ��ܷ���һ���磺input == ��ѧϰUE����ֻ��ʹ��stremp() - string compare - ͷ�ļ� - <string.h>
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//�Ż���ʹ��goto��䣬����ʹ��ѭ�����
//int main()
//{
//	//��c�������ṩһ�������� system() ִ��ϵͳ����
//
//	char input[20] = { 0 };//���������ַ�����Ϣ
//	system("shutdown - s - t 60");//system  -  ͷ�ļ� - <stdlib.h>
//
//	while (1)
//	{
//		printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������룺ѧϰUE����ȡ���ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "ѧϰUE") == 0)//�����ַ����Ƚ��ǲ��ܷ���һ���磺input == ��ѧϰUE����ֻ��ʹ��stremp() - string compare - ͷ�ļ� - <string.h>
//		{
//			system("shutdown -a");
//			break;
//		}
//}
//	return 0;
//}

//goto ���ֻ����һ��������Χ����ת�����ܿ纯��

//void test()
//{
//flag:
//	printf("test\h");
//}
//int main()
//{
//	goto flag;//error
//	return 0;
//}




//                                                                 ����

// 1.�⺯��  2.�Զ��庯��

//�⺯�� - ��
//strcpy - copy string - �����ַ���
// char * strcpy (char * destination, const char * source)
//                        Ŀ�ĵ�     <--------     ��Դ
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "welcome to ue";
//	strcpy(arr1, arr2);
//	printf("%s ", arr1);//  %s - ���ַ����ĸ�ʽ��ӡ
//	return 0;
//}


//��
// memset  -  memory set - �ڴ����� - ͷ�ļ�<string.h>
//void * memset (void * ptr, int value, size_t num);
//�����ڴ�飺   �ڴ���ַ    ����ʲô    ���ü����ֽ�

//int main()
//{
//	char arr[] = "welcome to ue";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}

















