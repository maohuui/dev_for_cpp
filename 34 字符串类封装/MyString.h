#pragma once
#include <iostream>
using namespace std;

class MyString
{
	friend ostream& operator<<(ostream& out, MyString& str);
	friend istream& operator>>(istream& in, MyString& str);
public:
	MyString();
	//�вι���
	MyString(const char* str);

	//��������
	MyString(const MyString& str);

	//����[]�����
	char& operator[](int index);

	//����=
	MyString& operator=(MyString &str);

	MyString& operator=(char *str);

	//+���أ� �ַ���ƴ��
	MyString operator+(MyString& str);

	MyString operator+(const char *str);

	// == ����
	bool operator==(MyString& str);

	bool operator==(const char* str);

	~MyString();

private:
	char* pString;
	int m_Size;
};

