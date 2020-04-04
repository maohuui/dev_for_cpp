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
		cout << m_Name << "在吃饭" << endl;
	}
};

//c++封装：将属性和行为作为一个整体，来表现生活中的事物
//c++下的struct 和 class的确保“struct默认权限是public，class默认权限是private
//将这些成员加以权限控制
/*
权限： public   protected  private
public    类内可以访问  类外也可以访问
protected 类内可以访问  类外不可以访问 继承类可以访问 
private： 类内可以访问  类外不可以访问 继承类也不可以访问
*/
//class Person
//{
//	char m_Name[64];
//	int m_Age;
//	void PersonEat()
//	{
//		cout << m_Name << "在吃饭" << endl;
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
		cout << m_Name << "在吃饭" << endl;
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