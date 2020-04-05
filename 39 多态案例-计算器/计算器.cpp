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
����ԭ�򣺶���չ���п������޸Ľ��йر�
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


//��̬�ô��� ��չ�Ըߣ� ��֯��ǿ���ɶ��Ը�
//������������麯��������û����д������麯������������������
//�������û����д�麯����û��ʵ�ֶ�̬�����һ����һ���麯����ָ�룬�ڲ��ṹ��ø�����
void test01()
{
	AbstractCalculator* calc = new AddCalc;
	calc->m_A = 20;
	calc->m_B = 2;

	cout << calc->getResult() << endl;
	delete calc;

	//��Ϊ����
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