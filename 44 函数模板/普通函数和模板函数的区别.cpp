#include <iostream>
using namespace std;

int myPlus(int a, int b)
{
	return a + b;
}

template<typename T> // T是一个通用类型，告诉编译器后面的函数或类中出现T, 不要报错
int myPlus1(T a, T b)
{
	return a + b;
}

//普通函数和模板函数的调用规则
template<typename T>
void myPrint01(T a)
{
	cout <<" 函数模板调用" <<  a << endl;
}

template<typename T>
void myPrint01(T a, T b)
{
	cout << " 函数模板调用" << a  << " " << b<< endl;
}

void myPrint01(int a)
{
	cout << " 普通函数调用" << a << endl;
}

void test03()
{
	int a = 10;
	int b = 20;
	cout << myPlus(a, b) << endl;
	cout << myPlus1(a, b) << endl;

	char c = 'c';
	cout << myPlus(a, c) << endl; // 隐式类型转换
	//cout << myPlus1(a, c) << endl; 
	cout << myPlus1<int>(a, c) << endl; // 自动类型推到方式，不可以进行隐式类型转换,但是显式的可以
}

void test04()
{
	//1. 如果普通函数和函数模板可以同时调用，优先使用普通函数
	myPrint01(10); 
	//2. 如果想强制调用 函数模板中的内容，可以使用空参数列表
	myPrint01<>(10);
	//3. 函数模板也可以发生重载
	myPrint01(10, 20);
	//4. 如果函数模板可以产生更好的匹配，优先使用函数模板
	myPrint01('a', 'b');
}

//int main()
//{
//	//test03();
//	test04();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}