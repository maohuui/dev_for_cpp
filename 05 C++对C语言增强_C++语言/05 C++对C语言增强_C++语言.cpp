#include <iostream>
using namespace std;

//1. 全局变量检测增强
int a;
//int a = 10; //int a: 重定义

//2. 函数检测增强:形参变量类型检测增强，函数声明返回值检测增强
int getRectArea(int w, int h)
{
	return w * h;
}

void test02()
{
	//getRectArea(10, 20, 30); //传入参数
}

//3. 类型转换检测增强
void test03()
{
	char* p = (char*)malloc(10); //malloc返回void*
}

//4. struct增强
struct Person
{
	int age;
	void func() { age++; } //c++语言中结构体可以有函数
};

void test04()
{
	Person p; //c++语言中 声明结构体可以不加struct关键字
	p.age = 10;
	p.func();

	cout << "p 的年龄：" << p.age << endl;
}

//5. bool类型增强
// bool代表true(1) false(0)
bool flag = true;

void test05()
{
	cout << "sizeof(flag): " << flag << endl; //结果：1
	cout << "flag: " << flag << endl;
}

//6. 三目运算符增强
void test06()
{
	int a = 10;
	int b = 20;

	printf("ret = %d\n", a > b ? a : b);

	//c++语言中，三目运算符返回的是变量 b = 100;
	a > b ? a : b = 100;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
}

int main()
{
	test02();
	test03();
	test04();
	test05();
	test06();

	system("pause");
	return EXIT_SUCCESS;
}