#include <iostream>
using namespace std;

const double Pi = 3.14;
//����һ���࣬�ؼ���class+����
class Circle
{
public: //����������
	//���еĺ�����Ϊ��Ա�������Ա����
	double calcZC()
	{
		return 2 * Pi * m_R;
	}
	void setR(int r)
	{
		m_R = r;
	}
	int getR()
	{
		return m_R;
	}
	//���еı�����Ϊ��Ա�������Ա����
	int m_R; //�뾶 ����
};

void test01()
{
	Circle c1; //ͨ���ഴ��һ������ʵ��������
	c1.setR(10);

	cout << "�뾶�� " << c1.m_R << endl;
	cout << "�뾶�� " << c1.getR() << endl;
	cout << "�ܳ��� " << c1.calcZC() << endl;
}


int main01()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}