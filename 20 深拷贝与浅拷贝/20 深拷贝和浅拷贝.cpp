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

	//ϵͳ�ṩ��Ĭ�Ϲ��캯����ǳ����
	//Person(const Person &p)
	//{
	//	m_Name = p.m_Name;
	//	m_Age = p.m_Age;
	//}

	//�Լ�ʵ�����
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
	cout << "p1 ������" << p1.m_Name << " ���䣺" << p1.m_Age << endl;

	//Person p2(p1);
	//cout << "p2 ������" << p2.m_Name << " ���䣺" << p2.m_Age << endl; // Ĭ�ϵĿ������캯��������ǳ����
	//����������ʱ���ͷ������ڴ�

	Person p3(p1);
	cout << "p3 ������" << p3.m_Name << " ���䣺" << p3.m_Age << endl;
}
int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}