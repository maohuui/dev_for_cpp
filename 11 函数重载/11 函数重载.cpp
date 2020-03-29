#include <iostream>
using namespace std;

//函数重载的条件：
//同一个作用域
//函数名称一样
//class p
//{
//	void func(int a)
//	{
//		cout << " " << endl;
//	}
//};
//1. 参数个数
void func(int a)
{
	cout << "void func(int a)" << endl;
}
void func(int a, int b)
{
	cout << "void func(int a, int b)" << endl;
}
//2. 参数类型
void func(int a, double b)
{
	cout << "void func(int a, double b)" << endl;
}
//3. 顺序不同
void func(double b, int a)
{
	cout << "void func(double b, int a)" << endl;
}

//4. 返回值不能作为重载条件，原因是：函数返回可以不接收
//int func(int a, double b)
//{
//	cout << "int func(int a, double b)" << endl;
//}

void test01()
{
	func(10);
	func(10, 20);
	func(20, 3.4);
	func(3.5, 5);
}

//5. 引用重载
//对于引用而言，加const和不加const可以作为重载条件
//加引用和不加引用不可以
//void myfun(int a)
//{
//	cout << "myfun(int a)" << endl;
//}
void myfun(int& a)
{
	cout << "myfun(int& a)" << endl;
}
void myfun(const int& a)
{
	cout << "myfun(const int& a)" << endl;
}

void test02()
{
	int a = 10;
	myfun(a);
	myfun(10);
}

//函数重载遇到函数默认参数
void myfun01(int a)
{
	cout << "myfun01(int a)" << endl;
}
void myfun01(int a, int b=10)
{
	cout << "myfun01(int a, int b=10)" << endl;
}

void test03()
{
	myfun01(10, 20);
	//myfun01(10); //传递一个参数，有二义性
}

int main()
{
	test01();
	test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}