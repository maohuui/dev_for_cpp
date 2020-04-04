#include "Circle.h"


void Circle::setR(int R)
{
	m_R = R;
}
void Circle::setCenter(Point center)
{
	m_Center.setX(center.getX());
	m_Center.setY(center.getY());
}
int Circle::getR()
{
	return m_R;
}
Point Circle::getCenter()
{
	return m_Center;
}

void Circle::isInCircleByClass(Point& p)
{
	int distance_sqrt = (m_Center.getX() - p.getX()) * (m_Center.getX() - p.getX()) +
		(m_Center.getY() - p.getY()) * (m_Center.getY() - p.getY());
	int r_sqrt = m_R * m_R;

	if (distance_sqrt == r_sqrt)
		cout << " 点在圆上" << endl;
	else if (distance_sqrt > r_sqrt)
		cout << " 点在圆外" << endl;
	else
		cout << " 点在圆内" << endl;
}
