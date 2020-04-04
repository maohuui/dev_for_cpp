#include <iostream>
using namespace std;

#pragma pack(show) // 默认对齐模数  warning C4810: pragma pack(show) 的值 == 8
#pragma pack(4)
class Person
{
public:
	int m_A;

	//成员函数并不算在类的大小中
	//成员函数和成员变量是分开存储的
	void func()
	{

	}

	// 静态成员变量不属于类的大小中

	static int m_B;

	// 静态成员函数不属于类的大小中
	static void func01()
	{

	}

	double m_C;
};

int Person::m_B = 10;

void test01()
{
	//空类的大小为1，空类也是可以实例化对象的，每个对象在内存中的地址是惟一的。
	//cout << "" << sizeof(Person) << endl;  

	//一个int m_A ： 4
	//cout << "" << sizeof(Person) << endl;

	//一个int m_A + 一个函数 func  = 4
	//cout << "" << sizeof(Person) << endl;

	//一个int m_A + 一个函数 func  + static 变量 = 4
	//cout << "" << sizeof(Person) << endl;

	//一个int m_A + 一个函数 func  + static 变量  + static 函数= 4
	//cout << "" << sizeof(Person) << endl;

	cout << "" << sizeof(Person) << endl; //默认对齐模数：double 

	cout << "" << sizeof(Person) << endl; //#pragma pack(1): 12
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

