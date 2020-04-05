#include <iostream>
using namespace std;

class Base1
{
public:
	Base1()
	{
		m_A = 10;
	}

	int m_A;

};

class Base2
{
public:
	Base2()
	{
		m_B = 20;
	}

	int m_A;
	int m_B;
};

class Son : public Base1, public Base2
{
public:
	Son()
	{
		m_C = 11;
		m_D = 12;
	}

	int m_C;
	int m_D;
};

void test01()
{
	Son s;

	cout << sizeof(s) << endl; // 4*5

	//cout << s.m_A << endl;
	cout << s.m_B << endl;
	cout << s.m_C << endl;
	cout << s.m_D << endl;

	cout << s.Base1::m_A << endl; //两个父类都有同名的成员，调用需要加上作用域区分，一般不建议使用
}

//int main()
//{
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}