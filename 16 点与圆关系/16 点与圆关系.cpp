#include <iostream>
#include <string>
using namespace std;
#include "Point.h"
#include "Circle.h"

//class Point
//{
//public:
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	int getX()
//	{
//		return m_X;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};
//
//class Circle
//{
//public:
//	void setR(int R)
//	{
//		m_R = R;
//	}
//	void setCenter(Point center)
//	{
//		m_Center.setX(center.getX());
//		m_Center.setY(center.getY());
//	}
//	int getR()
//	{
//		return m_R;
//	}
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//	void isInCircleByClass(Point& p)
//	{
//		int distance_sqrt = (m_Center.getX() - p.getX()) * (m_Center.getX() - p.getX()) +
//			(m_Center.getY() - p.getY()) * (m_Center.getY() - p.getY());
//		int r_sqrt = m_R * m_R;
//
//		if (distance_sqrt == r_sqrt)
//			cout << " 点在圆上" << endl;
//		else if (distance_sqrt > r_sqrt)
//			cout << " 点在圆外" << endl;
//		else
//			cout << " 点在圆内" << endl;
//	}
//
//private:
//	int m_R;
//	Point m_Center;
//};
//
////全局函数判断点和圆的关系
void isInCircle(Circle &c, Point &p)
{
	int distance_sqrt = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	int r_sqrt = c.getR() * c.getR();

	if (distance_sqrt == r_sqrt)
		cout << " 点在圆上" << endl;
	else if (distance_sqrt > r_sqrt)
		cout << " 点在圆外" << endl;
	else
		cout << " 点在圆内" << endl;
}

void test01()
{
	Point center;
	center.setX(0);
	center.setY(0);
	Circle c;
	c.setCenter(center);
	c.setR(10);

	Point p1;
	p1.setX(20);
	p1.setY(0);

	isInCircle(c, p1);

	Point p2;
	p2.setX(10);
	p2.setY(0);

	isInCircle(c, p2);

	Point p3;
	p3.setX(5);
	p3.setY(0);

	isInCircle(c, p3);

	c.isInCircleByClass(p1);
	c.isInCircleByClass(p2);
	c.isInCircleByClass(p3);
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}