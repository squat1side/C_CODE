#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>//(����ͷ�ļ� - strlen - �����ַ�������)
#include <windows.h>//Sleep ������ͷ�ļ� -��������

//                                                     do...while()ѭ��

//do�﷨���ʽ
//
// do
//    ѭ����䣻
// while (���ʽ����

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//                                          continue  ��  break

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;
//			continue;//��ѭ�� - ִ��continue����Ĵ���ʡȥ
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


//test

//����n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//����1��+2��+3��+4!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		ret = 1;//����ret�Ľ׳�ǰ����ret��ʼΪ1
//		for (n = 1; n <= i; n++)
//		{
//			ret *= n;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//��
//1.��һ�����������в��Ҿ����ĳһ������ n ��


//1.�۰��ѯ����������±��۰룩
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ���ҵ�����
//	//��arr������������в�ѯk(7)��ֵ������Ĳ�ѯ�����±��ѯ
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		//  һ�β���
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±�:%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//
//
//	return 0;
//}

//           1    ,2    ,3    ,4    ,5    ,6    ,7    ,8    ,9    ,10
//�±�    left 0                    mid                            right 9
//���mid<����ֵ����������Ҳ��۰��ѯ                             
//                                       mid+1        mid          right 9



//������д���룬��ʾ����ַ��������ƶ������м���
//welcome to UE!!!!!!!
//int main()
//{
//	char arr1[] = "welcome to UE!!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//
//		Sleep(1000);             //˯��ʱ���� - ms��λ
//		system("cls");  //   �����Ļ
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//��
//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//��ֻ���������������룬���������ȷ����ʾ��½�ɹ��������¼���ξ�����������˳�����)

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//���� 123456789 Ϊ��ȷ�������ַ���
//	for (i = 0; i < 3; i++)
//	{
//		printf("��������:>");
//		scanf("%s", password);
//		//if (password == "123456789")  // err  -  �����ַ����Ƚϣ�����ʹ�� == ��Ӧ��ʹ��stecmp ����
//		if (strcmp(password, "123456789") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("���������������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����\n");
//	}
//	return 0;
//}


