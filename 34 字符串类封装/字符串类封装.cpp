#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "MyString.h"


ostream& operator<<(ostream& out, MyString& str)
{
	out << str.pString;
	return out;
}

istream& operator>>(istream& in, MyString& str)
{
	//先判断str原来是否有数据，如果有先释放
	if (str.pString != NULL)
	{
		delete[] str.pString;
		str.pString = NULL;
	}
	char buf[1024]; //缓冲区

	in >> buf; //用户输入数据放入buf

	//将buf数据放到str.pString中
	str.pString = new char[strlen(buf) + 1];
	strcpy(str.pString, buf);
	str.m_Size = strlen(buf);

	return in;
}

void test01()
{
	MyString str = "aaaa";
	cout << str << endl;

	//cin >> str;
	//cout << str << endl;

	//cout << "---------------------" << endl;

	//cout << "第一个字符：" << str[0] << endl;
	//str[0] = 'c';
	//cout << "第一个字符：" << str[0] << endl;

	//MyString str1 = str;
	//cout << str1<< endl;

	//MyString str2 = "sadsjdfk";
	//cout << str2<< endl;

	MyString str3 = "def";
	MyString str4 = "dggg";
	//MyString str5 = str3 + str4;

	//cout << str5 << endl;

	//MyString str6 = str5 + "100";
	//cout << str6 << endl;

	if(str3 == str4)
		cout << " == " << endl;
	else
		cout << "!=" << endl;
}


int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}