#define  _CRT_SECURE_NO_WARNINGS 1



//1.写出主函数（main函数）
//主函数内可以有多行代码
//c语言是从主函数的第一行开始执行
//所以c语言代码中得有main函数入口

//例如在屏幕上打印：yang
//printf - 库函数-在屏幕上打印信息的
//printf 的使用，也得打招呼（指引用头文件的 stdio.h)

//
//#include <stdio.h>
// 

//int main()
//{
//	printf("yang");
//
//
//	return 0;
//}

//编译+链接+运行代码
//快捷键：ctrl+ f5
//fn+ctrl+f5
// 
//有且只有一个主函数main
//一个工程中可以有多个.c文件
//但是多个.c文件中只能有一个main函数
//



//数据类型
//计算机语言 - 写程序 - 解决问题
// 
//有能力描述生活中问题
//例如购物商城 - 上架商品 - ，价格 - 15.6 - 小数 -1.56*10^1
//例如年龄 - 10
//c语言 - 浮点数
//      -  整型


//char  字符数据类型（a .c.d)
// 
// 整数型使用%d
//short  短整型
//int   整型
//long  长整型
//long long  更长的整型
// 
// %f - float
// %lf - double
//float   单精度浮点数
//double  双精度浮点数


//例 a
//存储 - 字符a; 变量空间ch 存储 'a'

//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整型
//	int age = 20;
//	//短整型
//	short num = 10;
//
//	//单精度浮点型
//	float weight = 55.5;
//	//双精度浮点型
//	double d = 0.0;
//
//	rutur 0;
//}





//int main()
//{
////printf("hehe\n");
////printf("杨\n");
////printf("%d\n", 100);//  %d - 对应格式 - 打印一个整数
//
////sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小
//
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	//sizeof单位 - 字节byte
//
//	return 0;
//}




//c语言怎么描述
//常量 - 不能改变的量；
//变量 - 能被改变的量；

//
//                                                                  变量
 
// 
//int main()
//{
//
//	//创建的一个变量
//	//类型  变量的名字 = 0；//推荐(一定要有这种形式的才算变量）
//	//类型  变量的名字；//不推荐
//
//	int age = 20;
//	double weight = 75.3;
//
//	age = age+1;
//	weight = weight - 5;
//	printf("%d\n", age);
//	printf("%lf", weight);
//
//
//
//	return 0;
//}



//变量
//局部变量
//全局变量


//大括号{}外的为全局变量
//当局部变量和全局变量的名字冲突时，局部优先
//不建议把全局变量和局部变量的名字写成一样
//int a = 100;
//
//int mian()
//{
//	//大括号{}内的定义为局部变量
//	int a = 10;
//	{
// printf("%d\n", a);
//
//
//
//	return 0;
//}


//例 变量的使用
//求两个整数的和
//scanf函数是输入函数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum = %d\n", sum);
//
//	return 0;
//
//}




//变量的作用域和生命周期
// 
// 作用域
//局部变量的作用域：就是变量所在的局部范围（哪里起作用就是变量的作用域）
// 
//执行的函数代码（打印函数，赋值函数等）只能在函数里面
// 
//全局变量的作用域：整个工程
//声明一下变量 extern 
//在同一工程下源文件的另一个文件中(第一行则为另外文件的变量）

//int g_val = 100;
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}


//变量生命周期
//指变量的创建和销毁之间的时间段
//
//局部变量的生命周期:进入局部范围生命开始，出局部范围生命结束（例如在里面大括号内局部变量生命周期开始，外结束）
// int main()
// {
//    {
//       int a = 10;
//       printf("%d\n", a);
// }
// return 0;
// }
// 
//全局变量的生命周期:就是程序的生命周期




//
//                                                                      常量


     //1.字面常量
	 // int mian()
	//{
        //整型常量
	            //10；
		        //11；
	    //浮点常量
		        //3.14；
	    //字符串常量
		        //'a';
	            //'abcd';
//return 0;
// }
// 

     //2.const修饰得常变量
//
// 
//int main()
//{
//			    int num = 10;//变量（num为变量，在int 前加const则变为常变量-具有常属性（不能被改变的属性）（本质还是变量，只是具有了常属性）;加完const后则num = 20报错）
//				num = 20;
//				printf("num = %d\n", num);
//
//
//
//	return 0;
//}
//证明num为变量
//数组
//int main()
//{
//	int arr[10] = {0};//10个元素//arr数组的名字
//	int n = 10;
//	int arr2[n] = {0};//n为变量，则无法运行；如果使用const修饰 n ,使其变为常量，依旧报错，所以 n 为常变量，根上依旧属于变量，需要常量的地方，n依旧不行
//
//
//	return 0;
//}
//
//
//
     //3.#define 定义的标识符常量
//#define MAX 10000      //# - 开头  ；define - 定义(在大括号里外定义都可以）；MAX - 定义出的符号；
//
//int main()
//{
//	int n = MAX;
//	printf("n = %d\n", n);
//
//
//	return 0;
//}


     //4.枚举常量
//可以一一列举的常量（性别,星期等）

//性别(enum - 关键字；Sex - 定义类型）
//enum Sex
//{
//	//枚举类型的变量的未来可能取值
//	//枚举常量 - MALE , FEMALE , SECRET
//	MALE,//赋初值
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d", MALE);
//	printf("%d", FEMALE);
//	printf("%d", SECRET);
//
//
//	return 0;
//}