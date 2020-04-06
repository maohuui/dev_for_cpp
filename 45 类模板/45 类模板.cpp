#include <iostream>
using namespace std;

//泛型编程：类型参数化
template<class NameTyep, class AgeType=int>
class Person
{
public:
	Person(NameTyep name,AgeType age) //可以使用默认的参数类型
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	NameTyep m_Name;
	AgeType m_Age;
};


void test01()
{
	//Person p1("Tom", 20); //对于类模板，不能使用自动推到类型
	Person<string, int>("Tom", 10);//必须指定类型
}
//int main()
//{
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}