#pragma once
#include <iostream>
using namespace std;
#include <string>

//构造函数的分类以及调用
/*分类：
按照参数分类： 有参构造函数， 无参构造函数（默认构造函数）
按照类型分类： 普通构造函数   拷贝构造函数

*/
class Person
{
public:
	/*1. 构造函数的写法：
	没有返回值，不写void，函数名与类名相同
	可以有参数，可以发生重载
	有编译器自动调用，编译器只调用一次
	*/
	
	Person(); //默认构造函数，
	Person(int age, string name); //有参构造函数
	Person(const Person& c);

	/*2. 析构函数
	没有返回值，不写void ，函数与类名相同，在函数名前加~
	不可以有参数，不允许重载
	编译器自动调用，只调用一次
	*/
	~Person();

private:
	int m_Age;
	string m_Name;
};

