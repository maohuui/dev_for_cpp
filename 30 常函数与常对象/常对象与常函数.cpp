#include <iostream>
using namespace std;

class Person
{
public:
	void showA() // void showA(Person * const this) this�ı�����ָ�볣����ָ���ָ�򲻿��Ըı䣬ָ��ָ���ֵ���Ըı�
	{
		cout << "" << this->m_A << endl;
		//this = NULL;
	}
	//��Ա���������������const ������������ʾ�������޸ĳ�Ա����
	void func() const //thisָ��ָ���ֵҲ�����޸�
	{
		//this->m_A = 100;
		this->m_B = 200;

		cout << "" << this->m_A << endl;
		//this = NULL;
	}

	int m_A;
	mutable int m_B; //��ʹ������Ҳ�����޸ı���ֵ�����Ϲؼ���mutable

};

void test01()
{
	Person p1;
	p1.m_A  = 10;
	p1.showA();
	p1.func();
}

//������
void test02()
{
	const Person p1; //������ 
	//p1.m_A = 10;   //�����޸��ڲ�����
	p1.m_B = 200;    //������ͳ������������޸�
	//p1.show();     //�������ܵ�����ͨ�ĳ�Ա������
	p1.func();       //������ֻ�ܵ��ó�����
}

int main()
{
	test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}