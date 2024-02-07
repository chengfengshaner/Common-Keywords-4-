//static修饰局部变量，改变局部变量的生命周期（本质上时改变变量的存储类型）
// 
//栈区 - 局部变量、函数参数
//堆区 - 动态内存分配
//静态区 - 全局变量、static修饰的静态变量
// 
//a平时存在于栈区的，而static使a存储于静态区，使其生命周期增加到程序结束为止

//extern 声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

#include <stdio.h>
//声明函数
extern int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d\n", sum);

	return 0;
}