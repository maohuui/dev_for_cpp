#include <iostream>
#include <string>
using namespace std;

//求立方体的体积和面积
//全局函数和成员函数判断两个立方体相等
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
	//求面积
	int caculateS()
	{
		return (2 * m_length * m_width + 2 * m_length * m_height, 2 * m_width * m_height);
	}
	//求体积
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

//利用全局函数判断两个立方体是否相等
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

	cout << "c1  面积：" << c1.caculateS() << " 体积：" << c1.caculateV() << endl;
	cout << "c1  长：" << c1.getLength() << " 宽：" << c1.getWidth() << " 高：" << c1.getHeight() << endl;

	Cube c2;
	c2.setLength(10);
	c2.setHeight(10);
	c2.setWidth(10);

	cout << "c2  面积：" << c2.caculateS() << " 体积：" << c2.caculateV() << endl;
	cout << "c2  长：" << c2.getLength() << " 宽：" << c2.getWidth() << " 高：" << c2.getHeight() << endl;

	if( compareCube(c1, c2))
		cout << "c1 与 c2 相等" << endl;
	else
		cout << "c1 与 c2 不相等" << endl;

	Cube c3;
	c3.setLength(12);
	c3.setHeight(3);
	c3.setWidth(5);

	if (c1.compareCubeByClass(c3))
		cout << "c1 与 c3 相等" << endl;
	else
		cout << "c1 与 c3 不相等" << endl;
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}