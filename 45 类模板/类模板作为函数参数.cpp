#include <iostream>
using namespace std;

template<class NameTyep, class AgeType=int>
class Person
{
public:
	Person(NameTyep name, AgeType age) //可以使用默认的参数类型
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	NameTyep m_Name;
	AgeType m_Age;
};

//1. 指定传入类型
void doWork01(Person<string, int>&p)
{
	cout << p.m_Age << endl;
	cout << p.m_Name << endl;
}

//2. 参数模板化
template<class T1, class T2>
void doWork02(Person<T1, T2>& p)
{
	cout << typeid(T1).name() << endl;
	cout << p.m_Age << endl;
	cout << p.m_Name << endl;
}

//3. 整个类模板化
template<class T>
void doWork03(T& p)
{
	cout << typeid(T).name() << endl;
	cout << p.m_Age << endl;
	cout << p.m_Name << endl;
}

void test03()
{
	Person<string, int> p1("hello", 20);
	doWork01(p1);

	Person<string, int> p2("world", 20);
	doWork02(p2);

	Person<string, int> p3("!", 20);
	doWork03(p3);
}
int main()
{
	test03();

	system("pause");
	return EXIT_SUCCESS;
}