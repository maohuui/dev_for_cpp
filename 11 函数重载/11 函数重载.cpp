#include <iostream>
using namespace std;

//�������ص�������
//ͬһ��������
//��������һ��
//class p
//{
//	void func(int a)
//	{
//		cout << " " << endl;
//	}
//};
//1. ��������
void func(int a)
{
	cout << "void func(int a)" << endl;
}
void func(int a, int b)
{
	cout << "void func(int a, int b)" << endl;
}
//2. ��������
void func(int a, double b)
{
	cout << "void func(int a, double b)" << endl;
}
//3. ˳��ͬ
void func(double b, int a)
{
	cout << "void func(double b, int a)" << endl;
}

//4. ����ֵ������Ϊ����������ԭ���ǣ��������ؿ��Բ�����
//int func(int a, double b)
//{
//	cout << "int func(int a, double b)" << endl;
//}

void test01()
{
	func(10);
	func(10, 20);
	func(20, 3.4);
	func(3.5, 5);
}

//5. ��������
//�������ö��ԣ���const�Ͳ���const������Ϊ��������
//�����úͲ������ò�����
//void myfun(int a)
//{
//	cout << "myfun(int a)" << endl;
//}
void myfun(int& a)
{
	cout << "myfun(int& a)" << endl;
}
void myfun(const int& a)
{
	cout << "myfun(const int& a)" << endl;
}

void test02()
{
	int a = 10;
	myfun(a);
	myfun(10);
}

//����������������Ĭ�ϲ���
void myfun01(int a)
{
	cout << "myfun01(int a)" << endl;
}
void myfun01(int a, int b=10)
{
	cout << "myfun01(int a, int b=10)" << endl;
}

void test03()
{
	myfun01(10, 20);
	//myfun01(10); //����һ���������ж�����
}

int main()
{
	test01();
	test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}