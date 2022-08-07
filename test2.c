#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//字符串+转义字符+注释
//


//                                                         字符串


//字符串就是一串字符 - 用双引号括起来的一串字符
// 有单引号引出的内容为一个字符 - ‘a’
//"hello xu"  "asdfg"

//int main()
//{
//	"hello xu";
//	"asdfg";
//
//	return 0;
//}


#include <string.h>//(引用头文件 - strlen - 计算字符串数量)

//int main()
//{
	//字符数组 - 数组是一组形同类型的元素
	//字符串在结尾的位置隐藏了一个\0的字符，就是字符串中字符数量为所数字符+1（\0)
	//\0是字符串的结束标志（不算做字符串的结束内容）
	//char arr[] = "hello";

	//char arr1[] = "abc";//(字符串 - 4字符）//("abc\0")
	//char arr2[] = { 'a', 'b', 'c' };//（三个字符）//(abc)//如果在后面加入'\0',则最后运行结果和上面一致

	//打印字符串
		//验证方法
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	// 
	// strlen - 直到 \0为止
	//求字符串的长度（1）(\0是作为字符串的数量但不被计算在内）
//	int len = strlen("abc");//string length
//	printf("%d\n", len);
//
//	//求字符串长度（2）//strlen 求字符串长度 arr2结果为随机值，在第四位后全为随机值，直到随机值为 \0 停止
//	printf("%d/n", strlen(arr1));
//	printf("%d/n", strlen(arr2));
//
//	//字符串的结束是一个 \0 的转义字符，在计算字符串长度的时候 \0 是结束标志，不算做字符串内容
//	return 0;
//}



//                                                                转义字符


//转义字符：转变了它原来的意思
//在屏幕上打印一个目录：c:\code\test.c
//int main()
//{

	//printf("c:\test\test.c");
	//printf("ab\ncd");//（转义字符：\n)

	//printf("(are you ok??)");// ??) - 转义 - ] - 三字母词 - (are you ok]
	//printf("(are you ok\?\?");

	//printf("%c\n", 'a');//输出 - a
	//printf("%c\n", '\'');//输出 - ’ ；转义字符 - \'

	//printf在打印数据时候，可以指打印格式
	//printf("%d\n", 100); 打印整型
	//printf("%d\n", 'a'); 打印字符
	//printf("%s\n", "abc"); 打印字符串

	//printf("%s\n", "abc");//%s - 打印字符串
	//printf("%s\n", "\"");//转义字符 - \"

	//打印路径c:\test\test.c
	//printf("c:\test\test.c");//转义字符 \t - 为table键位 - 水平制表符 - 打印出则为空键
	//如何打印出路径，则对 \t 转义 - 加\
	//printf("c:\\test\\test.c");

	//printf("\a\a\a"); //警告字符 - \a
//	return 0;
//}


	//重点转义字符 - \ddd - \xdd
	// 
	// \ddd - ddd表示1-3个八进制的数字；如： \130 X

	//int main()
	//{
	//	printf("%s\n", '\130');
	//	return 0;
	//	//X

	//	//1      3      0
	//	//8^2  +  8^1  +  8^0 = 88 - X -- ASCII码值是88
	//}
//打印A - 65(十进制） - 转换 - 8进制：101
//int main()
//{
//	printf("%c\n", '\101');
//
//	return 0;
//}
//ASCII码表：每一个字符都有一个值：ASCII码值（例：A - 65；B - 66;a - 97;.....)



	// \xdd - dd表示2个十六进制数字。如： \x30 0
//int main()
//{
//	printf("%d\n", '\x30');//字符 - 0
//	//3          0
//	//16^1  +    16^0   = 48 - 十进制
//
//	return 0;
//}



//int main()
//{
//	printf("%d\n", strlen("c:\test\test\328.c"));//14个字符，转义字符为一个
//
//	return 0;
//}




//                                                 选择语句


//int main()
//{
//	int input = 0;//输入的值
//	printf("学习虚幻引擎：>\n");//\n - 换行
//	printf("需要学习c语言吗(1/0)?>:");
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("制作出游戏\n");
//	else
//		printf("失败");
//
//
//	return 0;
//}



//                                                   循环语句

//30000代码 - 入门UE

//int main()
//{
//	int line = 0;
//	while (line < 30000)  //while循环
//	{
//		printf("写代码\n", line);g
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("入门UE");
//	}
//
//	return 0;
//}



//                                                       函数

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

//函数方式
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;  //z存放着计算结果
//	return z;  //是把计算结果返回（输出/赋值）给下面的sum
//}
// 
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
//	int sum = Add(num1， num2);
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//我；带饭  （蛋炒饭， 20） - 张三（蛋炒饭， 20）
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}






	






