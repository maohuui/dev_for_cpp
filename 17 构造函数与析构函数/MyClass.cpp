#include "MyClass.h"


Person::Person()
{
	m_Age = 18;
	m_Name = "xiaoming";
	cout << "name: " << m_Name << " age:" << m_Age << endl;
	cout << "Person �޲ι��캯��" << endl;
}


Person::Person(int age, string name)
{
	m_Age = age;
	m_Name = name;
	cout << "name: " << m_Name << " age:" << m_Age << endl;
	cout << "Person(int a) �вι��캯��" << endl;
}

Person::Person(const Person& p) //����const �������ܸı䣬& ��Ϊ�˲��ý���ֵ���ݹ������ֲ����Ŀ������캯��
{
	m_Age = p.m_Age;
	m_Name = p.m_Name;
	cout << "name: " << m_Name << " age:" << m_Age << endl;
	cout << "Person �������캯��" << endl;
}


Person::~Person()
{
	cout << "Person ��������" << endl;
}