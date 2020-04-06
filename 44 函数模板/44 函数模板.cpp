#include <iostream>
using namespace std;

void mySwap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void mySwap(double& a, double& b)
{
	double tmp = a;
	a = b;
	b = tmp;
}

//利用模板实现通用的交换函数
template<typename T> // T是一个通用类型，告诉编译器后面的函数或类中出现T, 不要报错
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
void mySwap01()
{

}

void test01()
{
	int a = 10;
	int b = 20;
	mySwap(a, b);
	cout << "a : " << a << " b:" << b << endl;

	double c = 10.1;
	double d = 20.1;
	mySwap(c, d);
	cout << "c : " << c << " d:" << d << endl;

	// 1. 自动推到， 必须让编译器推到处一致的T， 才能使用模板
	//int e = 10;
	//double f = 20.111;
	//mySwap(e, f);
	//cout << "e : " << e << " f:" << f << endl;

	//2. 显示指定类型
	//可以进行隐式的类型转换，如果转换不成功，也不可以使用模板
	char ce = 'x';
	mySwap<int>(a, b);
	//mySwap<int>(a, d); //如果使用引用， 不可以进行隐式转换

	//模板必须指出T的类型，才可以使用
	/*mySwap01();
	mySwap01<>();*/
	mySwap01<double>();
}

//int main()
//{
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}