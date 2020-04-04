#include <iostream>
using namespace std;


class  Person
{
public:
	static int  m_A;
	void func2()
	{
		m_B = 300; //普通成员函数可以访问静态成员变量
		cout << " 普通成员函数 " << endl;
	}
	static void func()
	{
		//m_C = 100; //非静态成员变量不能访问，因为无法区分变量归属于谁
		m_B = 200;   //静态成员函数可以访问静态成员变量，因为都是共享数据
		cout << " 静态成员函数 " << endl;
	}

private:
	static int m_B;
	int m_C;
};

int Person::m_A = 10;
int Person::m_B = 100;

void test01()
{
	//访问方式：对象访问
	Person p1;
	p1.func();


	//类名访问
	Person::func();

}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}