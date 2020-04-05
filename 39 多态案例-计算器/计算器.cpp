#include <iostream>
using namespace std;

class Calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
			return m_A + m_B;
		else if (oper == "-")
			return m_A - m_B;
		else if (oper == "*")
			return m_A * m_B;
		else if (oper == "/")
			return m_A + m_B;
	}

	int m_A;
	int m_B;
};

/*
开闭原则：对扩展进行开发，修改进行关闭
*/
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_A;
	int m_B;
};

class AddCalc : public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_A + m_B;
	}
};

class SubCalc : public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_A - m_B;
	}
};

class MulCalc : public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_A * m_B;
	}
};


//void showResult(AbstractCalculator& calc)
//{
//	cout << "resutl: " << calc.getResult();
//}


//多态好处： 扩展性高， 组织下强，可读性高
//如果父类中有虚函数，子类没有重写父类的虚函数，这样代码无意义
//如果子类没有重写虚函数，没有实现多态，而且会多了一个虚函数表指针，内部结构变得复杂了
void test01()
{
	AbstractCalculator* calc = new AddCalc;
	calc->m_A = 20;
	calc->m_B = 2;

	cout << calc->getResult() << endl;
	delete calc;

	//改为减法
	calc = new SubCalc;
	calc->m_A = 20;
	calc->m_B = 2;
	cout << calc->getResult() << endl;


	delete calc;
	calc = NULL;
}

int main()
{
	test01();

	system("pause");

	return EXIT_SUCCESS;
}