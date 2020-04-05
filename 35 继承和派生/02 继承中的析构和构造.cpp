#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base 的构造函数调用" << endl;
	}
	~Base()
	{
		cout << "Base 的析构函数调用" << endl;
	}
};

class Son
{
public:
	Son()
	{
		cout << "Son 的构造函数调用" << endl;
	}
	~Son()
	{
		cout << "Son 的析构函数调用" << endl;
	}
};

class Base02
{
public:
	Base02(int a)
	{

	}
};
class Son2 : public Base02
{
public:
	//可以利用初始化列表，显示指出调用父类的哪个构造函数
	Son2(int a) : Base02(a)
	{

	}
};

//子类不会继承父类的构造和析构
//只有父类才知道如何析构和构造自己的属性

void test02()
{
	Base b;

	Son s; //先调用父类的构造，再子类，析构先析构子类的，然后析构父类

	Son2 s1(1);
}

//int main()
//{
//	test02();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}