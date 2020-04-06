#include <iostream>
using namespace std;

int myPlus(int a, int b)
{
	return a + b;
}

template<typename T> // T��һ��ͨ�����ͣ����߱���������ĺ��������г���T, ��Ҫ����
int myPlus1(T a, T b)
{
	return a + b;
}

//��ͨ������ģ�庯���ĵ��ù���
template<typename T>
void myPrint01(T a)
{
	cout <<" ����ģ�����" <<  a << endl;
}

template<typename T>
void myPrint01(T a, T b)
{
	cout << " ����ģ�����" << a  << " " << b<< endl;
}

void myPrint01(int a)
{
	cout << " ��ͨ��������" << a << endl;
}

void test03()
{
	int a = 10;
	int b = 20;
	cout << myPlus(a, b) << endl;
	cout << myPlus1(a, b) << endl;

	char c = 'c';
	cout << myPlus(a, c) << endl; // ��ʽ����ת��
	//cout << myPlus1(a, c) << endl; 
	cout << myPlus1<int>(a, c) << endl; // �Զ������Ƶ���ʽ�������Խ�����ʽ����ת��,������ʽ�Ŀ���
}

void test04()
{
	//1. �����ͨ�����ͺ���ģ�����ͬʱ���ã�����ʹ����ͨ����
	myPrint01(10); 
	//2. �����ǿ�Ƶ��� ����ģ���е����ݣ�����ʹ�ÿղ����б�
	myPrint01<>(10);
	//3. ����ģ��Ҳ���Է�������
	myPrint01(10, 20);
	//4. �������ģ����Բ������õ�ƥ�䣬����ʹ�ú���ģ��
	myPrint01('a', 'b');
}

//int main()
//{
//	//test03();
//	test04();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}