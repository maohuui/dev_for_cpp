#include <iostream>
using namespace std;

template <class T1, class T2>
class Person;

//告诉编译器有一个模板函数的声明
template <class T1, class T2>
void showInfo1(Person<T1, T2>& p);

//将函数模板声明和实现写在一起
template <class T1, class T2>
void showInfo2(Person<T1, T2>& p)
{
	cout << "类外实现2： " << p.m_Name << endl;
	cout << " " << p.m_Age << endl;
}


template <class T1, class T2>
class Person
{
	//1. 全局函数 配合友元 类内实现
	friend void showInfo(Person<T1, T2>& p)
	{
		cout << " 类内实现： " << p.m_Name << endl;
		cout << " " << p.m_Age << endl;
	}
	//2. 全局函数 配合友元 类外实现
	//friend void showInfo1(Person<T1, T2>& p); //普通函数的声明
	friend void showInfo1<>(Person<T1, T2>& p); //模板函数

	//3. 全局函数配合友元做类外实现
	friend void showInfo2<>(Person<T1, T2>& p); 

public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};

//模板函数的实现
template <class T1, class T2>
void showInfo1(Person<T1, T2>& p)
{
	cout << "类外实现： " << p.m_Name << endl;
	cout << " " << p.m_Age << endl;
}

void test01()
{
	Person<string, int> p("Tome", 12);
	showInfo(p);

	showInfo1(p);

	showInfo2(p);
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}