#pragma once
#include <iostream>
using namespace std;

class MyString
{
	friend ostream& operator<<(ostream& out, MyString& str);
	friend istream& operator>>(istream& in, MyString& str);
public:
	MyString();
	//有参构造
	MyString(const char* str);

	//拷贝构造
	MyString(const MyString& str);

	//重载[]运算符
	char& operator[](int index);

	//重载=
	MyString& operator=(MyString &str);

	MyString& operator=(char *str);

	//+重载， 字符串拼接
	MyString operator+(MyString& str);

	MyString operator+(const char *str);

	// == 重载
	bool operator==(MyString& str);

	bool operator==(const char* str);

	~MyString();

private:
	char* pString;
	int m_Size;
};

