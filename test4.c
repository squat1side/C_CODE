#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <string.h>//(引用头文件 - strlen - 计算字符串数量)


//C语言提供的关键字
//1.C语言提供的，不能自己创建关键字
//2.变量名不能做关键字
//例： auto  break  case  char  const  contine  default  do  double    register  return  sizeof   static(静态的）  switch(语句） union(联合体/共用体)  ... ...
//auto 是自动的 - 每一个局部变量都是auto修饰的

//register - 寄存器关键字
//计算机中数据可以存放在：内存中  ， 网盘  ，硬盘  ，高速缓存（xxx MB)，  寄存器(更小） --- 左至右 - 造价变高，速度变快，空间越小
//int main()
//{
//	//大量/频繁被使用的数据，想放在寄存器中，提升效率
//	register int num = 100;//建议num的值存放在寄存器中
//
//	return 0;
//}

//define  -  include  -  不是关键字 -  预处理指令



//关键字 - typedef - 类型重定义

//typedef unsigned int u_int;
//
//int main()
//{
//	unsigned int num = 100;
// //相同
//	u_int num2 = 100;
//
//	return 0;
//}



//关键字 - static - 静态的（静态变量）
//1.static 修饰局部变量 - 可以改变局部变量的生命周期（本质改变了变量的存储类型） - 如下对局部变量a修饰static后，改变生命周期，出test函数执行后不销毁，生命周期继续
//2.修饰全局变量  -  使得这个全局变量只能在自己所在的源文件（.c）内部可以使用，其他文件不能使用
//3.修饰函数


//例
//void test()
//{
//	 static int a = 1;
//	a++;
//	printf("%d", a);
//}
////开始
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();//调用test函数
//		i++;
//	}
//
//	return 0;
//}


//extern声明外部符号 - test4内全局变量 - g_val = 2022  -  如果static对全局变量g_val修饰，则报错
//全局变量是在其他源文件内部可以被使用，因为全局变量具有外部连接属性
//被static修饰过的全局变量，则变成了外部链接属性，其他源文件就不能被链接到静态的全局变量
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//声明函数
//static - 修饰函数，使函数只能在自己所在的源文件内部使用，不能在其他源文件内部使用（和static修饰全局变量一样）
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}



//                                                                常量&宏


//definr 是一个预处理指令
//1.define定义符号(常量）


//#define MAX 1000//定义符号MAX
//
//int main()
//{
//	printf("%d\n", MAX)；
//
//	return 0;
//}

//2.define定义宏
//#define ADD(X,Y) X+Y
//int main()
//{
//	//printf("%d\n", ADD(2, 3));// 5
//	//printf("%d\n", 4 * ADD(2, 3));// 4*2+3 = 11
//
//	return 0;
//}

//如何得出20
//#define ADD(X,Y) ((X)+(Y))
//int main()
//{
//	printf("%d\n", 4 * ADD(2, 3));
//	return 0;
//}




//                                                      指针

//int main()
//{
//	int a = 10;//a在内存中要分配空间 - 4个字节
//	printf("%p\n", &a);// %p 是专门用来打印地址的
//	int * pa = &a; //pa 是用来存放地址的，在c语言中pa叫指针变量
//	// * 说明 pa 是指针变量
//	//int 说明 pa 执行的对象是 int 类型的
//
//	//同理对 char 类型
//	char ch = 'w';
//	char * pc = &ch
//
//	return 0;
//}


//                                                   指针操作


//指针  就是  地址
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20; // * 解引用操作 - *pa 就是通过pa里面的地址，找到a
//	printf("%d\n", a);
//
//
//	return 0;
//}
