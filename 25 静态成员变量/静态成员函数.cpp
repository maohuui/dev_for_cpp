#include <iostream>
using namespace std;


class  Person
{
public:
	static int  m_A;
	void func2()
	{
		m_B = 300; //��ͨ��Ա�������Է��ʾ�̬��Ա����
		cout << " ��ͨ��Ա���� " << endl;
	}
	static void func()
	{
		//m_C = 100; //�Ǿ�̬��Ա�������ܷ��ʣ���Ϊ�޷����ֱ���������˭
		m_B = 200;   //��̬��Ա�������Է��ʾ�̬��Ա��������Ϊ���ǹ�������
		cout << " ��̬��Ա���� " << endl;
	}

private:
	static int m_B;
	int m_C;
};

int Person::m_A = 10;
int Person::m_B = 100;

void test01()
{
	//���ʷ�ʽ���������
	Person p1;
	p1.func();


	//��������
	Person::func();

}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}