#include <iostream>
using namespace std;

//泛型编程：类型参数化
class Person1
{
public:
	Person1()
	{
		cout << " Person1 " << endl;
	}
	void showPerson1()
	{
		cout << " showPerson1 " << endl;
	}
};

class Person2
{
public:
	Person2()
	{
		cout << " Person2 " << endl;
	}
	void showPerson2()
	{
		cout << " showPerson2 " << endl;
	}
};

//类模板的成员函数，并不是一开始就创建出来的，而是在运行阶段创建的
template<class T>
class MyClass
{
public:
	void func1()
	{
		obj.showPerson1();
	}
	void func2()
	{
		obj.showPerson2();
	}
	T obj;
};

void test02()
{
	MyClass<Person1> p1;
	p1.func1();
	//p1.func2(); //调用不成功

}
//int main()
//{
//	test02();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}