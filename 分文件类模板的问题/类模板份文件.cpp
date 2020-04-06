#include <iostream>
using namespace std;
//#include"Person.h"
//#include "Person.cpp" //不建议做类模板分文件编写，因为创建成员函数时机是在运行阶段，使用时必须要包含.cpp
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