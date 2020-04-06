#include <iostream>
using namespace std;

template <class T1, class T2>
class Person;

//���߱�������һ��ģ�庯��������
template <class T1, class T2>
void showInfo1(Person<T1, T2>& p);

//������ģ��������ʵ��д��һ��
template <class T1, class T2>
void showInfo2(Person<T1, T2>& p)
{
	cout << "����ʵ��2�� " << p.m_Name << endl;
	cout << " " << p.m_Age << endl;
}


template <class T1, class T2>
class Person
{
	//1. ȫ�ֺ��� �����Ԫ ����ʵ��
	friend void showInfo(Person<T1, T2>& p)
	{
		cout << " ����ʵ�֣� " << p.m_Name << endl;
		cout << " " << p.m_Age << endl;
	}
	//2. ȫ�ֺ��� �����Ԫ ����ʵ��
	//friend void showInfo1(Person<T1, T2>& p); //��ͨ����������
	friend void showInfo1<>(Person<T1, T2>& p); //ģ�庯��

	//3. ȫ�ֺ��������Ԫ������ʵ��
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

//ģ�庯����ʵ��
template <class T1, class T2>
void showInfo1(Person<T1, T2>& p)
{
	cout << "����ʵ�֣� " << p.m_Name << endl;
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