#include <iostream>
using namespace std;

//如果类中有纯虚函数匿，那么这个类称为抽象类
//抽象类无法实例化对象
//父类是抽象类，子类必须要重写纯虚函数,否则子类也是抽象类
class AbstractCalculator
{
public:
	virtual int getResult() = 0;// 纯虚函数
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

void test01()
{
	AbstractCalculator* calc = new AddCalc;
	calc->m_A = 10;
	calc->m_B = 20;
	cout << calc->getResult() << endl;

}

//int main()
//{
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}