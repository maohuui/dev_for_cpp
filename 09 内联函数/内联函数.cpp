#include <iostream>
using namespace std;

#define MYADD(a, b) ((a)+(b))

//1. 宏定义的缺陷：保证运算完整性，需要加小括号修饰
void test01()
{
	int a = 10;
	int b = 40;

	int ret = MYADD(a, b) * 20;
	cout << " a + b = " << ret << endl;
}
//2. 缺陷2：即使加入括号修饰，有些情况依然出现问题
#define MYCOMPARE(a, b) (((a)<(b))?(a):(b))

int compare(int a, int b)
{
	return a > b ? a : b;
}

void test02()
{
	int a = 10;
	int b = 40;

	int ret = MYCOMPARE(++a,b);
	cout << " ret =  " << ret << endl;

	int ret1 = compare(++a, b);
	cout << " ret1 =  " << ret1 << endl;
}

//缺陷3：不重视作用域

//inline的使用
inline int mycompare(int a, int b)
{
	return a > b ? a : b;
}

void test03()
{
	int a = 10;
	int b = 40;
	int ret1 = mycompare(++a, b);
	cout << " ret1 =  " << ret1 << endl;
}

//注意
//1. 内联函数的声明和实现都要加上inline关键字
inline void test();
inline void test()
{

}
//2. 类的成员函数自动是内联函数

//3. 编译器有一些限制：以下情况不能将函数进行内联编译
/*
	(1) 不能存在任何形式的循环
	(2) 不能存在过多的条件判断语言
	(3) 函数体不能太过庞大
	(4) 不能对函数进行取址操作
*/

//内联仅仅只是给编译器一个建议，编译器不一定接收，如果没有将函数声明为内联，编译器也有可能进行内联编译
int main()
{
	test01();
	test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}