
#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void speak()
	{
		cout << " " << endl;
	}
};

class Cat : public Animal
{
public:
	Cat()
	{
		m_Age = 10;
	}
	virtual void speak()
	{
		cout << " " << endl;
	}
	int m_Age;
};

void test01()
{
	//����ת�� �� ----> ��  ����ȫ�� 
	/*
	Animal* animal = NULL;
	Cat* cat = (Cat*)animal;
	*/
	
	//����ת�� �� ----> �� ��ȫ
	/*
	Cat* cat = NULL;
	Animal* animal = (Animal*)cat;
	*/
	

	//���˶�̬�� ���ǰ�ȫ��
	/*
	Animal* animal = new Cat;
	animal->speak();
	*/
}

/*
���أ�
	1. ͬһ��������
	2. ��������������˳�򣬲������Ͳ�ͬ
	3. �ͺ�������ֵû�й�ϵ
	4. constҲ������Ϊ��������

��д
	1. �̳�
	2. ������д�����virtual�ĺ���
	3. �����ķ���ֵ���������֣�����������һ��

�ض���
	1. �̳�
	2. ������д���������ͬ����virtual ����
	���ظ�������ͬ������func() func(int)����

*/

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}