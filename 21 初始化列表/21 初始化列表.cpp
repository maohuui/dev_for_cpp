#include <iostream>
using namespace std;

class Person
{
public:
	//初始化列表：也是用来初始化类中的属性
	Person(int a, int b, int c)
		: m_A(a)
		, m_B(b)
		, m_C(c)
	{

	}

	int m_A;
	int m_B;
	int m_C;
};

void test01()
{
	Person p1(10, 30, 20);
}


int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}