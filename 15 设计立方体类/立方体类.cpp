#include <iostream>
#include <string>
using namespace std;

//�����������������
//ȫ�ֺ����ͳ�Ա�����ж��������������
class Cube
{
public:
	void setLength(int length)
	{
		m_length = length;
	}
	void setWidth(int width)
	{
		m_width = width;
	}
	void setHeight(int height)
	{
		m_height = height;
	}
	int getLength()
	{
		return m_length;
	}
	int getWidth()
	{
		return m_width;
	}
	int getHeight()
	{
		return m_height;
	}
	//�����
	int caculateS()
	{
		return (2 * m_length * m_width + 2 * m_length * m_height, 2 * m_width * m_height);
	}
	//�����
	int caculateV()
	{
		return m_length * m_height * m_width;
	}

	bool compareCubeByClass(Cube& c)
	{
		if (m_height == c.getHeight() &&
			m_length == c.getLength() &&
			m_width == c.getWidth())
			return true;
		else
			return false;
	}
private:
	int m_length;
	int m_width;
	int m_height;
};

//����ȫ�ֺ����ж������������Ƿ����
bool compareCube(Cube& c1, Cube& c2)
{
	if (c1.getHeight() == c2.getHeight() &&
		c1.getLength() == c2.getLength() &&
		c1.getWidth() == c2.getWidth())
		return true;
	else
		return false;
}


void test01()
{
	Cube c1;
	c1.setLength(10);
	c1.setHeight(10);
	c1.setWidth(10);

	cout << "c1  �����" << c1.caculateS() << " �����" << c1.caculateV() << endl;
	cout << "c1  ����" << c1.getLength() << " ��" << c1.getWidth() << " �ߣ�" << c1.getHeight() << endl;

	Cube c2;
	c2.setLength(10);
	c2.setHeight(10);
	c2.setWidth(10);

	cout << "c2  �����" << c2.caculateS() << " �����" << c2.caculateV() << endl;
	cout << "c2  ����" << c2.getLength() << " ��" << c2.getWidth() << " �ߣ�" << c2.getHeight() << endl;

	if( compareCube(c1, c2))
		cout << "c1 �� c2 ���" << endl;
	else
		cout << "c1 �� c2 �����" << endl;

	Cube c3;
	c3.setLength(12);
	c3.setHeight(3);
	c3.setWidth(5);

	if (c1.compareCubeByClass(c3))
		cout << "c1 �� c3 ���" << endl;
	else
		cout << "c1 �� c3 �����" << endl;
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}