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

	//��ֹ��ʽ����ת����ʽ����ʼ������
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
	//MyString s2 = 10; //��ʽ�����е���Ϊ���ַ������ȣ��е���Ϊ�ַ�����10

	MyString s3 = MyString(10);
}
int main()
{

	system("pause");
	return EXIT_SUCCESS;
}