#include <iostream>
using namespace std;

class MyString
{
public:
	MyString(char* str)
	{

	}
	/*MyString(int len)
	{
		m_Len = len;
	}*/

	//防止隐式类型转换方式来初始化对象
	explicit MyString(int len) 
	{
		m_Len = len;
	}
	int m_Len;
	char* m_str;
};

void test01()
{
	MyString s1 = "abe"; 
	//MyString s2 = 10; //隐式法：有的认为是字符串长度，有的认为字符串是10

	MyString s3 = MyString(10);
}
int main()
{

	system("pause");
	return EXIT_SUCCESS;
}