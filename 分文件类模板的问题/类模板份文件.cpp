#include <iostream>
using namespace std;
//#include"Person.h"
//#include "Person.cpp" //����������ģ����ļ���д����Ϊ������Ա����ʱ���������н׶Σ�ʹ��ʱ����Ҫ����.cpp
#include "Person.hpp"


void test01()
{
	Person<string, int> p("Tome", 12);
	p.showInfo();
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}