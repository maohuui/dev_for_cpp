#include <iostream>
using namespace std;

class Person
{
public:
	Person(int a)
	{
		this->a = a; //1.thisָ����������ͻ��//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
	}
	void showA() // void showA(Person * this)
	{
		cout << "" << this->a << endl;
	}
	Person& addA(Person& p)
	{
		this->a = this->a + p.a;
		return *this;
	}

	int a;
};

void test01()
{
	
	Person p1(18);
	p1.showA();

	Person p2(10);
	p2.showA();

	p1.addA(p2).addA(p2).addA(p2); //��ʽ���
	p1.showA();

}
int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;

}