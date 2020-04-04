#include <iostream>
using namespace std;

//һ������ֻ����һ��ʵ������
// һ����ϯ��һ����ӡ��
// ��ϯ�� ��ӡ����

class Printer
{
public:
	static Printer* getInstance()
	{
		return m_printer;
	}
	//���ݹ�������ֻ���õ�һ����ϯ�Ķ���ָ��

	void printText(string text)
	{
		m_count++;
		cout << text << endl;
	}

	int m_count = 0;

private:
	//�����캯��˽�л������ܴ����������
	Printer()
	{
		cout << "Printer()" << endl; //Ĭ�Ϲ��캯���ڱ���׶��Ѿ���ʼ�ˡ���main����֮ǰ
	}
	//�������캯��Ҳ˽�л�
	Printer(const Printer& c)
	{
		cout << "Printer(const Printer& c)" << endl;
	}
	//Ψһ����ϯָ��
	static Printer* m_printer;
	

};

Printer* Printer::m_printer = new Printer;


void test01()
{
	Printer* p1 = Printer::getInstance();
	Printer* p2 = Printer::getInstance();

	if (p1 == p2)
	{
		cout << "ͬһ������" << endl;
	}
	p1->printText("hehehhehehhe");
	p2->printText("xiexieixieixe");

	p2->printText("dsfgmd");
	p2->printText("sfg");

	cout << p2->m_count << endl;
	cout << p1->m_count << endl;
}

int main()
{
	test01();

	system("pause");
	return EXIT_FAILURE;
}