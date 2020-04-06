#include <iostream>
using namespace std;
#include "MyArray.hpp"

void printArray(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << " " << arr[i] << endl;
	}
}

void test01()
{
	MyArray<int> myarr(10);
	for (int i = 0; i < 5; i++)
	{
		myarr.pushBack(i + 10);
	}
	printArray(myarr);
}

class Person
{
public:
	Person()
	{

	}
	Person(string name, int age)
		: m_Name(name)
		, m_Age(age)
	{

	}

	string m_Name;
	int m_Age;
};

void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << " " << arr[i].m_Name << " " << arr[i].m_Age << endl;
	}
}

void test02()
{
	MyArray<Person> pArray(10);
	Person p1("1", 1);
	Person p2("2", 2);
	Person p3("3", 3);
	Person p4("4", 4);
	Person p5("5", 5);

	pArray.pushBack(p1);
	pArray.pushBack(p2);
	pArray.pushBack(p3);
	pArray.pushBack(p4);
	pArray.pushBack(p5);

	printPersonArray(pArray);
}

int main()
{
	test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}