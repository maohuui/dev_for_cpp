#include <iostream>
using namespace std;

//���ͱ�̣����Ͳ�����
class Person1
{
public:
	Person1()
	{
		cout << " Person1 " << endl;
	}
	void showPerson1()
	{
		cout << " showPerson1 " << endl;
	}
};

class Person2
{
public:
	Person2()
	{
		cout << " Person2 " << endl;
	}
	void showPerson2()
	{
		cout << " showPerson2 " << endl;
	}
};

//��ģ��ĳ�Ա������������һ��ʼ�ʹ��������ģ����������н׶δ�����
template<class T>
class MyClass
{
public:
	void func1()
	{
		obj.showPerson1();
	}
	void func2()
	{
		obj.showPerson2();
	}
	T obj;
};

void test02()
{
	MyClass<Person1> p1;
	p1.func1();
	//p1.func2(); //���ò��ɹ�

}
//int main()
//{
//	test02();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}