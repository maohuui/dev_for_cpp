#include <iostream>
using namespace std;

class Parent1
{
public:
	Parent1()
	{
		
	}
	static void func()
	{
		cout << "Parent" << endl;
	}

	static int m_B;
};

int Parent1::m_B = 100;

class S2 : public Parent1
{
public:
	S2()
	{
	}
	static void func()
	{
		cout << "S1" << endl;
	}
	static int m_B;
};
int S2::m_B = 300;

void test04()
{
	S2 s;
	cout << s.m_B << endl;
	cout << s.Parent1::m_B << endl;

	cout << S2::m_B << endl;
	cout << S2::Parent1::m_B << endl;


	s.func();
	s.Parent1::func();

	//�����е�ͬ�������������ظ����е�ͬ����Ա���������ذ汾������ͨ����������
	S2::func();
	Parent1::func();

}

int main()
{
	test04();

	system("pause");
	return EXIT_SUCCESS;
}