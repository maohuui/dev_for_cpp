#include <iostream>
using namespace std;

const double Pi = 3.14;
//创建一个类，关键字class+类名
class Circle
{
public: //公共作用域
	//类中的函数称为成员函数或成员方法
	double calcZC()
	{
		return 2 * Pi * m_R;
	}
	void setR(int r)
	{
		m_R = r;
	}
	int getR()
	{
		return m_R;
	}
	//类中的变量称为成员变量或成员属性
	int m_R; //半径 属性
};

void test01()
{
	Circle c1; //通过类创建一个对象，实例化对象
	c1.setR(10);

	cout << "半径： " << c1.m_R << endl;
	cout << "半径： " << c1.getR() << endl;
	cout << "周长： " << c1.calcZC() << endl;
}


int main01()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}