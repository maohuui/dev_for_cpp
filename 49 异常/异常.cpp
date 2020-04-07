#include <iostream>
using namespace std;

class MyExecption
{
public:
	void printError()
	{
		cout << " MyExecption �쳣 " << endl;
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
		return -1; //C���Դ����쳣ȱ�����ڷ��ص�ֵû��ͳһ�� ���ص�ֵ�������쳣�����Ҳ��������ȷ�Ľ��
	}
	return a / b;
}

int myDivide1(int a, int b)
{
	if (b == 0)
	{
		//throw -1; //�׳��쳣
		//throw 1.1;
		//throw 'a';
		/*
		ջ��������try����鿪ʼ����throw�׳��쳣ǰ������ջ�ϵĶ��󶼱��ͷŵ�
		�ͷŵ�˳��͹����˳���෴�ģ�������̳�Ϊջ������
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

	//����ִ��һ�ο��ܳ����쳣�Ĵ���
	try
	{
		int c = 0;
		cout << myDivide1(a, c) << endl;
	}
	catch (int) //�����쳣
	{
		cout << "����int�쳣" << endl;
 	}
	catch (double) //�����쳣
	{
		cout << "����double�쳣" << endl;
	}
	catch (char) //�����쳣
	{
		//����char�󣬲��봦���쳣�������������쳣
		throw;
		cout << "����char�쳣" << endl;
	}
	catch (MyExecption e)
	{
		e.printError();
	}
	catch (...)
	{
		cout << "�������������쳣" << endl;
	}
	
}

int main()
{
	try
	{
		test01();
	}
	catch (char) //�쳣����Ҫ�����������ͻ����terminate�������ó����ж�
	{
		cout << "main ����char�쳣" << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}