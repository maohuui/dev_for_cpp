#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <string>

/*
 = [] () -> 操作符只能通过成员函数进行重载
 << >> 只能使用全局函数配合友元函数进行重载
 不要重载 && || 逻辑与 逻辑或实现不了短路规则
*/

void test01()
{

}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}