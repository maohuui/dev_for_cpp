#include<iostream>
using namespace std;

int a = 100;

void test01()
{
	int a = 200;

	cout << "�ֲ� a ��ֵ��" << a << endl;
	//::ǰ�����κε��������ʾȫ��������
	cout << "ȫ�� a ��ֵ��" << ::a << endl;
}
int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}