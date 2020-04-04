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

//1. 使用一个已经创建的对象来初始化另外一个对象
void test01()
{
	Person p1(40);
	Person p2(p1);

	cout << "年龄 "<< p2.m_Age << endl;
}

//2. 以值传递的方式给函数的参数传值
void doWork(Person p)
{

}

void test02()
{
	Person p1(40);
	doWork(p1);
}

//3. 以值得方式返回局部对象
Person doWork01()
{
	Person p; //默认
	return p; // 返回前拷贝一份 析构本身，作为匿名对象返回
}

void test03()
{
	Person p1 = doWork01(); //返回一个匿名对象然后命名为p1
}




int main()
{
	test01();
	test02();
	test03();
	
	system("pause");
	return EXIT_SUCCESS;
}