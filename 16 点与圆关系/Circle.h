#pragma once
#include "Point.h"
#include <iostream>
using namespace std;

class Circle
{
public:
	void setR(int R);
	void setCenter(Point center);
	int getR();
	Point getCenter();

	void isInCircleByClass(Point& p);

private:
	int m_R;
	Point m_Center;
};