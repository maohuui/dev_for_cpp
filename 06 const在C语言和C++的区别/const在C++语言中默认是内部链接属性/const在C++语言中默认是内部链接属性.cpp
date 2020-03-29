#include <iostream>
using namespace std;

void test01()
{
	//extern const int m_a; //fatal error LNK1120: 1 个无法解析的外部命令
	//cout << "m_a: " << m_a << endl; 
	extern const int m_A;
	cout << "m_A: " << m_A << endl;
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}