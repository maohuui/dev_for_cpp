#include <iostream>
using namespace std;

//一个类中只能有一个实例对象
// 一个主席，一个打印机
// 主席类 打印机类

class Printer
{
public:
	static Printer* getInstance()
	{
		return m_printer;
	}
	//数据共享，而且只许拿到一个主席的对象指针

	void printText(string text)
	{
		m_count++;
		cout << text << endl;
	}

	int m_count = 0;

private:
	//将构造函数私有化，不能创建多个对象
	Printer()
	{
		cout << "Printer()" << endl; //默认构造函数在编译阶段已经开始了。在main函数之前
	}
	//拷贝构造函数也私有化
	Printer(const Printer& c)
	{
		cout << "Printer(const Printer& c)" << endl;
	}
	//唯一的主席指针
	static Printer* m_printer;
	

};

Printer* Printer::m_printer = new Printer;


void test01()
{
	Printer* p1 = Printer::getInstance();
	Printer* p2 = Printer::getInstance();

	if (p1 == p2)
	{
		cout << "同一个对象" << endl;
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