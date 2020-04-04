#include "MyClass.h"


Person::Person()
{
	m_Age = 18;
	m_Name = "xiaoming";
	cout << "name: " << m_Name << " age:" << m_Age << endl;
	cout << "Person 无参构造函数" << endl;
}


Person::Person(int age, string name)
{
	m_Age = age;
	m_Name = name;
	cout << "name: " << m_Name << " age:" << m_Age << endl;
	cout << "Person(int a) 有参构造函数" << endl;
}

Person::Person(const Person& p) //加上const 表明不能改变，& 是为了不让进行值传递过程中又产生的拷贝构造函数
{
	m_Age = p.m_Age;
	m_Name = p.m_Name;
	cout << "name: " << m_Name << " age:" << m_Age << endl;
	cout << "Person 拷贝构造函数" << endl;
}


Person::~Person()
{
	cout << "Person 析构函数" << endl;
}