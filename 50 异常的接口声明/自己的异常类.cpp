#include <iostream>
using namespace std;
#include <stdexcept> //标准库

class MyException : public exception
{
public:
	MyException(char* errorInfo)
	{
		this->m_ErrorInfo = string(errorInfo);
	}
	MyException(string errorInfo)
	{
		this->m_ErrorInfo = errorInfo;
	}
	virtual const char * what() const
	{
		return this->m_ErrorInfo.c_str();
	}
	~MyException()
	{

	}
	string m_ErrorInfo;
};

class Person
{
public:
	Person(int age)
	{
		if (age < 0 || age > 150)
		{
			//抛出越界异常
			throw MyException("年龄必须在0—150之间");
		}
		this->m_Age = age;
	}
	int m_Age;
};

void test05()
{

	try
	{
		Person p(11111);
	}
	catch(MyException &e)
	//catch (exception& e)
	{
		cout << e.what() << endl;
	}
}
int main()
{
	test05();


	system("pause");
	return EXIT_SUCCESS;
}