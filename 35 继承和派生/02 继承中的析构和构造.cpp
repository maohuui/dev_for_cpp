#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base �Ĺ��캯������" << endl;
	}
	~Base()
	{
		cout << "Base ��������������" << endl;
	}
};

class Son
{
public:
	Son()
	{
		cout << "Son �Ĺ��캯������" << endl;
	}
	~Son()
	{
		cout << "Son ��������������" << endl;
	}
};

class Base02
{
public:
	Base02(int a)
	{

	}
};
class Son2 : public Base02
{
public:
	//�������ó�ʼ���б���ʾָ�����ø�����ĸ����캯��
	Son2(int a) : Base02(a)
	{

	}
};

//���಻��̳и���Ĺ��������
//ֻ�и����֪����������͹����Լ�������

void test02()
{
	Base b;

	Son s; //�ȵ��ø���Ĺ��죬�����࣬��������������ģ�Ȼ����������

	Son2 s1(1);
}

//int main()
//{
//	test02();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}