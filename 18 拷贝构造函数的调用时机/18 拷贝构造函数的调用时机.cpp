#include <iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person() " << endl;
	}
	Person(int age)
	{
		m_Age = age;
		cout << "Person(int age) " << endl;
	}
	Person(const Person& p)
	{
		m_Age = p.m_Age;
		cout << "Person(const Person& p)" << endl;
	}
	~Person()
	{
		cout << "~Person() " << endl;
	}

	int m_Age;
};

//1. ʹ��һ���Ѿ������Ķ�������ʼ������һ������
void test01()
{
	Person p1(40);
	Person p2(p1);

	cout << "���� "<< p2.m_Age << endl;
}

//2. ��ֵ���ݵķ�ʽ�������Ĳ�����ֵ
void doWork(Person p)
{

}

void test02()
{
	Person p1(40);
	doWork(p1);
}

//3. ��ֵ�÷�ʽ���ؾֲ�����
Person doWork01()
{
	Person p; //Ĭ��
	return p; // ����ǰ����һ�� ����������Ϊ�������󷵻�
}

void test03()
{
	Person p1 = doWork01(); //����һ����������Ȼ������Ϊp1
}




int main()
{
	test01();
	test02();
	test03();
	
	system("pause");
	return EXIT_SUCCESS;
}