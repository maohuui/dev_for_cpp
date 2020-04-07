#include <iostream>
using namespace std;

class MyExecption
{
public:
	void printError()
	{
		cout << " MyExecption 异常 " << endl;
	}
};

class Person
{
public:
	Person()
	{
		cout << " Person()" << endl;
	}
	~Person()
	{
		cout << " ~Person() " << endl;
	}
};

int myDivide(int a, int b)
{
	if (b == 0)
	{
		return -1; //C语言处理异常缺陷在于返回的值没有统一， 返回的值可以是异常结果，也可以是正确的结果
	}
	return a / b;
}

int myDivide1(int a, int b)
{
	if (b == 0)
	{
		//throw -1; //抛出异常
		//throw 1.1;
		//throw 'a';
		/*
		栈解旋：从try代码块开始，到throw抛出异常前，所有栈上的对象都被释放掉
		释放的顺序和构造的顺序相反的，这个过程称为栈解旋。
		*/
		Person p1;
		Person p2;
		throw MyExecption();
	}
	return a / b;
}


void test01()
{
	int a = 10;
	int b = -10;
	cout << myDivide(a, b) << endl;

	//尝试执行一段可能出现异常的代码
	try
	{
		int c = 0;
		cout << myDivide1(a, c) << endl;
	}
	catch (int) //捕获异常
	{
		cout << "捕获int异常" << endl;
 	}
	catch (double) //捕获异常
	{
		cout << "捕获double异常" << endl;
	}
	catch (char) //捕获异常
	{
		//捕获到char后，不想处理异常，继续向上抛异常
		throw;
		cout << "捕获char异常" << endl;
	}
	catch (MyExecption e)
	{
		e.printError();
	}
	catch (...)
	{
		cout << "捕获其他类型异常" << endl;
	}
	
}

int main()
{
	try
	{
		test01();
	}
	catch (char) //异常必须要处理，否则程序就会调用terminate函数，让程序中断
	{
		cout << "main 捕获char异常" << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}