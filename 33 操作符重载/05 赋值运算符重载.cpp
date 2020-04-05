#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <string>

class Person
{
public:
	Person(const char* name, int age)
	{
		this->m_Name = new char[strlen(name) + 1];
		strcpy(this->m_Name, name);
		this->m_Age = age;
	}
	~Person()
	{
		if (this->m_Name != NULL)
			delete [] this->m_Name;
		this->m_Name = NULL;
	}

	Person(const Person& p)
	{
		this->m_Name = new char[strlen(p.m_Name) + 1];
		strcpy(this->m_Name, p.m_Name);
		this->m_Age = p.m_Age;
	}

	//系统提供默认的 值拷贝 operator= 浅拷贝
	Person& operator = (const Person& p)
	{
		if (this->m_Name != NULL)
		{
			delete [] this->m_Name;
			this->m_Name = NULL;
		}

		this->m_Name = new char[strlen(p.m_Name) + 1];
		strcpy(this->m_Name, p.m_Name);
		this->m_Age = p.m_Age;

		return *this;
	}

	int m_Age;
	char* m_Name;
};

void test01()
{
	int a = 10;
	int b = 20;
	int c = a = b;
	cout << "a: " << a << " b: " << b << " c: " << c << endl;

	Person p1("Jack", 10);
	Person p2("Lucy", 20);
	Person p3 = p1 = p2;

	cout << "p1  name: " << p1.m_Name << " age: " << p1.m_Age << endl;
	cout << "p2  name: " << p2.m_Name << " age: " << p2.m_Age << endl;
	cout << "p3  name: " << p3.m_Name << " age: " << p3.m_Age << endl;
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}