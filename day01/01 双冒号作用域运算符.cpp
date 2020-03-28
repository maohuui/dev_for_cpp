#include<iostream>
using namespace std;

int a = 100;

void test01()
{
	int a = 200;

	cout << "局部 a 的值：" << a << endl;
	//::前不加任何的作用域表示全局作用域
	cout << "全局 a 的值：" << ::a << endl;
}
int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}