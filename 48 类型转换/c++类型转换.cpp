#include <iostream>
using namespace std;

/*
1. ��̬ת��������͸���ת��
֧����������ת��
static_cast
*/

class Base
{
public:
	virtual void show() = 0;
};

class Son : public Base
{
public:
	virtual void show()
	{
		cout << "" << endl;
	}
};

class Other
{

};


void test01()
{
	//��������ת��
	char a = 'a';
	double d = static_cast<double>(a);// static_cast<Ŀ������>(ԭ����)

	cout << d << endl;

	// �Զ�������
	Base* base = NULL;
	Son* son = NULL;

	//base ת��ΪSon*���ͣ���������ת�� ����ȫ
	Son* son2 = static_cast<Son*>(base);
	//sonת��ΪBase*���ͣ���������ת����ȫ
	Base* base2 = static_cast<Base*>(son);

	// ת��Ϊ��������
	//Other* other = static_cast<Other*>(son);//����ת����Ч
}

/*
2. ��̬����ת��:
��֧����������ת��
�����ν�������ת��ʱ����static_castЧ��һ����
�����ν�������ת��ʱ��dynamic_cast�������ͼ�飬��static_cast����ȫ
dynamic_cast
*/

void test02()
{
	//��������ת��
	char a = 'a';
	//double d = dynamic_cast<double>(a);// ��֧��

	// �Զ�������
	Base* base = NULL;
	Son* son = NULL;

	//base ת��ΪSon*���ͣ���������ת��  
	// ����ȫ ת��ʧ��
	//Son* son2 = dynamic_cast<Son*>(base); //��֧��

	//���������̬����������ת�����ǰ�ȫ��,�ǰ�ȫ��
	Base* base3 = new Son;
	Son* son3 = dynamic_cast<Son*>(base3);

	//sonת��ΪBase*���ͣ���������ת����ȫ
	Base* base2 = dynamic_cast<Base*>(son);

	// ת��Ϊ��������
	//Other* other = dynamic_cast<Other*>(son);//��֧��
}

/*
3. ��������ת��
const_cast ȥ��const
����const
���ܶԷ�ָ��ͷ����ý���ת��
*/
void test03()
{
	//ָ��֮��ת��
	const int* p = NULL;
	//��const int * תΪint*
	int* p2 = const_cast<int*>(p);
	const int* p3 = const_cast<const int*>(p2);

	//����֮������
	const int a = 10;
	const int& aR = a;
	int& aR = const_cast<int&>(aR);

	//�����ԶԷ�ָ�������ת
	//int b = const_cast<int>(a);
}

/*
4. ���½���ת��,���ȫ ������
reinterpret_cast
*/
void test04()
{
	int a = 10;
	int* p = reinterpret_cast<int*>(a);

	Base* base = NULL;
	Son* son = NULL;
	Other* other = reinterpret_cast<Other*>(son);
}

int main()
{
	//test01();
	//test02();
	//test03();
	test04();


	system("pause");
	return EXIT_SUCCESS;
}