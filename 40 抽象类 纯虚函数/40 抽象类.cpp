#include <iostream>
using namespace std;

//��������д��麯���䣬��ô������Ϊ������
//�������޷�ʵ��������
//�����ǳ����࣬�������Ҫ��д���麯��,��������Ҳ�ǳ�����
class AbstractCalculator
{
public:
	virtual int getResult() = 0;// ���麯��
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