#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

class Person
{
public:
	Person(const char *name, int age)
	{
		m_Name = (char*)malloc(strlen(name) + 1);
		strcpy(m_Name, name);

		m_Age = age;
	}

	//系统提供的默认构造函数，浅拷贝
	//Person(const Person &p)
	//{
	//	m_Name = p.m_Name;
	//	m_Age = p.m_Age;
	//}

	//自己实现深拷贝
	Person(const Person &p)
	{
		m_Name = (char*)malloc(strlen(p.m_Name) + 1);
		strcpy(m_Name, p.m_Name);

		m_Age = p.m_Age;
	}

	~Person()
	{
		if (m_Name != NULL)
			free(m_Name);
		m_Name = NULL;

	}

	char* m_Name;
	int m_Age;
};

void test01()
{
	Person p1("Tom", 30);
	cout << "p1 姓名：" << p1.m_Name << " 年龄：" << p1.m_Age << endl;

	//Person p2(p1);
	//cout << "p2 姓名：" << p2.m_Name << " 年龄：" << p2.m_Age << endl; // 默认的拷贝构造函数进行了浅拷贝
	//析构函数的时候释放两次内存

	Person p3(p1);
	cout << "p3 姓名：" << p3.m_Name << " 年龄：" << p3.m_Age << endl;
}
int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}