#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

struct Person
{
	char m_Name[64];
	int m_Age;
	void PersonEat()
	{
		cout << m_Name << "�ڳԷ�" << endl;
	}
};

//c++��װ�������Ժ���Ϊ��Ϊһ�����壬�����������е�����
//c++�µ�struct �� class��ȷ����structĬ��Ȩ����public��classĬ��Ȩ����private
//����Щ��Ա����Ȩ�޿���
/*
Ȩ�ޣ� public   protected  private
public    ���ڿ��Է���  ����Ҳ���Է���
protected ���ڿ��Է���  ���ⲻ���Է��� �̳�����Է��� 
private�� ���ڿ��Է���  ���ⲻ���Է��� �̳���Ҳ�����Է���
*/
//class Person
//{
//	char m_Name[64];
//	int m_Age;
//	void PersonEat()
//	{
//		cout << m_Name << "�ڳԷ�" << endl;
//	}
//};

void test01()
{
	struct Person p;
	strcpy(p.m_Name, "xiao hong");
	p.PersonEat();
}
struct Dog
{
	char m_Name[64];
	int m_Age;
	void DogEat()
	{
		cout << m_Name << "�ڳԷ�" << endl;
	}
};


void test02()
{
	struct Dog p;
	strcpy(p.m_Name, "wang cai");
	p.DogEat();

	struct Person p1;
	strcpy(p1.m_Name, "xiaohong");
	//p1.DogEat();
}


int main()
{
	test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}