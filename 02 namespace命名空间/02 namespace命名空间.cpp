#include <iostream>
#include "game1.h"
#include "game2.h"

using namespace std;

//1. �����ռ���;�����������ͻ
void test01()
{
	//goAtk(); //fatal error LNK1169: �ҵ�һ���������ض���ķ���
	LOL::goAtk();
	kingGlory::goAtk();
}

//2. �����ռ��¿��Էţ��������������ṹ�壬��
namespace
{
	int m_A = 10;
	void function() {};
	struct Persion
	{
		int age;
	};
	class Animal
	{
		int age;
	};
}

//3. �����ռ����������ȫ����������
void test02()
{
	//namespace B
	//{
	//	int b = 10;
	//}
}

//4. �����ռ����Ƕ��
namespace B
{
	int m_b = 10;
	namespace C
	{
		int m_b = 20;
		int m_c = 30;
	}
}

void test03()
{
	cout << "B: m_b " << B::m_b << endl;
	cout << "C: m_b " << B::C::m_b << endl;
	cout << "C: m_c " << B::C::m_c << endl;
}

//5. �����ռ��ǿ��ŵģ�������ʱ�������ռ�����µĳ�Ա
namespace B
{
	int m_b1 = 20;
}

void test04()
{
	cout << "B: m_b" << B::m_b << endl;
	cout << "B: m_b1" << B::m_b1 << endl;
}

//6. �����ռ������������
namespace
{
	int m_d = 100;
	int m_e = 200;
	//�൱���ڱ�������ǰ����static
	//static int m_d = 100;
	//static int m_e = 200;
}

void test05()
{
	cout << "m_d: " << m_d << endl;
	cout << "m_e: " << ::m_e << endl;
}

//7. �����ռ���������
namespace LongName
{
	int m_f = 20;
}

void test06()
{
	namespace name = LongName;

	cout << "LongName::m_f: " << LongName::m_f << endl;
	cout << "name::m_f: " << name::m_f << endl;
}

int main()
{
	test01();
	test02();
	test03();
	test04();
	test05();
	test06();

	system("pause");
	return EXIT_SUCCESS;
}