#include <iostream>
using namespace std;

//1. 编译器并不是把函数模板处理成任何类型的函数
//2. 函数模板通过不同的类型产生不同的函数
//3. 编译器会对函数模板进行两次编译，在声明的地方对模板代码本身进行编译，在调用的地方对参数替换后的代码进行编译

template<typename T>
void myPrint01(T a)
{
	cout << " 函数模板调用" << a << endl;
}

/*
假设传入的T 是int, 生成一个函数， 这个函数叫模板函数
void myPrint01(int a)
{
	cout << " 函数模板调用" << a << endl;
}
*/

//局限性：T类型是数组，或者Person类，做比较，不知道怎么做
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;

	}
	string m_Name;
	int m_Age;
};

template<typename T>
void myCompare(T &a, T &b)
{
	if (a == b)
		cout << " == " << endl;
	else
		cout << " != " << endl;
}

//利用具体话的person函数，告诉编译器走person的对比代码
template<>void myCompare<Person>(Person &a, Person &b)
{

	if (a.m_Age == b.m_Age &&
		a.m_Name == b.m_Name)
		cout << " == " << endl;
	else
		cout << " != " << endl;
}

void test05()
{
	Person p1("Tom", 19);
	Person p2("Loc", 20);

	myCompare(p1, p2);
}


int main()
{
	test05();

	system("pause");
	return EXIT_SUCCESS;
}