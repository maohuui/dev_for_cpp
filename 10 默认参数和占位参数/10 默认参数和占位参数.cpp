#include <iostream>
using namespace std;

//Ĭ�ϲ���
int add(int a = 10, int b = 10)
{
	return a + b;
}

void test01()
{
	cout << "ret=" << add() << endl;
	cout << "ret=" << add(1) << endl;
	cout << "ret=" << add(2, 3) << endl;
}

//ע������
//�����һ��λ����Ĭ�ϲ����������λ�ÿ�ʼ�����Ҷ�������Ĭ�ϲ���
//int func(int a=1, int b=10, int c)
//int func(int a, int b=1,int c)

int func(int a, int b=10, int c=0)
{
	return (a + b + c);
}
void test02()
{
	cout << "ret=" << func(2) << endl;
}

//������ʵ��ֻ����һ����Ĭ�ϲ���
int func01(int a = 10, int b = 10);
int func01(int a, int b)
{
	return a + b;
}
void test03()
{
	cout << "ret=" << func01() << endl;
}

//3. ռλ����
int func02(int a, int)
{
	return a;
}
void test04()
{
	cout << "ret=" << func02(10, 2) << endl;
}
int main()
{
	test01();
	test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}