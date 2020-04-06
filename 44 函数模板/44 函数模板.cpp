#include <iostream>
using namespace std;

void mySwap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void mySwap(double& a, double& b)
{
	double tmp = a;
	a = b;
	b = tmp;
}

//����ģ��ʵ��ͨ�õĽ�������
template<typename T> // T��һ��ͨ�����ͣ����߱���������ĺ��������г���T, ��Ҫ����
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
void mySwap01()
{

}

void test01()
{
	int a = 10;
	int b = 20;
	mySwap(a, b);
	cout << "a : " << a << " b:" << b << endl;

	double c = 10.1;
	double d = 20.1;
	mySwap(c, d);
	cout << "c : " << c << " d:" << d << endl;

	// 1. �Զ��Ƶ��� �����ñ������Ƶ���һ�µ�T�� ����ʹ��ģ��
	//int e = 10;
	//double f = 20.111;
	//mySwap(e, f);
	//cout << "e : " << e << " f:" << f << endl;

	//2. ��ʾָ������
	//���Խ�����ʽ������ת�������ת�����ɹ���Ҳ������ʹ��ģ��
	char ce = 'x';
	mySwap<int>(a, b);
	//mySwap<int>(a, d); //���ʹ�����ã� �����Խ�����ʽת��

	//ģ�����ָ��T�����ͣ��ſ���ʹ��
	/*mySwap01();
	mySwap01<>();*/
	mySwap01<double>();
}

//int main()
//{
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}