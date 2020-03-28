#include <iostream>
#include "game1.h"
#include "game2.h"

using namespace std;

//1. 命名空间用途：解决命名冲突
void test01()
{
	//goAtk(); //fatal error LNK1169: 找到一个或多个多重定义的符号
	LOL::goAtk();
	kingGlory::goAtk();
}

//2. 命名空间下可以放：变量，函数，结构体，类
namespace
{
	int m_A = 10;
	void function() {};
	struct Persion
	{
		int age;
	};
	class Animal
	{
		int age;
	};
}

//3. 命名空间必须声明在全局作用域下
void test02()
{
	//namespace B
	//{
	//	int b = 10;
	//}
}

//4. 命名空间可以嵌套
namespace B
{
	int m_b = 10;
	namespace C
	{
		int m_b = 20;
		int m_c = 30;
	}
}

void test03()
{
	cout << "B: m_b " << B::m_b << endl;
	cout << "C: m_b " << B::C::m_b << endl;
	cout << "C: m_c " << B::C::m_c << endl;
}

//5. 命名空间是开放的，可以随时向命名空间添加新的成员
namespace B
{
	int m_b1 = 20;
}

void test04()
{
	cout << "B: m_b" << B::m_b << endl;
	cout << "B: m_b1" << B::m_b1 << endl;
}

//6. 命名空间可以是匿名的
namespace
{
	int m_d = 100;
	int m_e = 200;
	//相当于在变量声明前加了static
	//static int m_d = 100;
	//static int m_e = 200;
}

void test05()
{
	cout << "m_d: " << m_d << endl;
	cout << "m_e: " << ::m_e << endl;
}

//7. 命名空间可以起别名
namespace LongName
{
	int m_f = 20;
}

void test06()
{
	namespace name = LongName;

	cout << "LongName::m_f: " << LongName::m_f << endl;
	cout << "name::m_f: " << name::m_f << endl;
}

int main()
{
	test01();
	test02();
	test03();
	test04();
	test05();
	test06();

	system("pause");
	return EXIT_SUCCESS;
}