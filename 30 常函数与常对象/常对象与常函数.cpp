#include <iostream>
using namespace std;

class Person
{
public:
	void showA() // void showA(Person * const this) this的本质是指针常量，指针的指向不可以改变，指针指向的值可以改变
	{
		cout << "" << this->m_A << endl;
		//this = NULL;
	}
	//成员函数声明后面加上const 代表常函数，表示不可以修改成员属性
	void func() const //this指针指向的值也不让修改
	{
		//this->m_A = 100;
		this->m_B = 200;

		cout << "" << this->m_A << endl;
		//this = NULL;
	}

	int m_A;
	mutable int m_B; //即使常函数也可以修改变量值，加上关键字mutable

};

void test01()
{
	Person p1;
	p1.m_A  = 10;
	p1.showA();
	p1.func();
}

//常对象
void test02()
{
	const Person p1; //常对象 
	//p1.m_A = 10;   //不能修改内部属性
	p1.m_B = 200;    //常对象和常函数都可以修改
	//p1.show();     //常对象不能调用普通的成员函数，
	p1.func();       //常对象只能调用常函数
}

int main()
{
	test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}