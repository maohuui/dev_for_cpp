#include <iostream>
using namespace std;

class Parent
{
public:
	Parent()
	{
		this->m_A = 100;
	}
	void func()
	{
		cout << "Parent" << endl;
	}
	void func(int a)
	{
		cout << "Parent" << endl;
	}
	int m_A;
};

class S1 : public Parent
{
public:
	S1()
	{
		this->m_A = 300;
	}
	void func()
	{
		cout << "S1" << endl;
	}
	int m_A;
};

void test03()
{
	S1 s;
	cout << s.m_A << endl; // �����
	cout << s.Parent::m_A << endl; //�����

	s.func(); //�����
	s.Parent::func(); //�����

	//s.func(10);// ͬ���ĳ�Ա��������������ص������е����а汾
	s.Parent::func(10);
}

//int main()
//{
//	test03();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}