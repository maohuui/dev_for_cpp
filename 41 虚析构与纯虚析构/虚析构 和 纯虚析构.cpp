#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << " Animal �Ĺ��캯�� " << endl;
	}
	virtual void speak()
	{ 
		cout << " �����˵��" << endl;
	}
	//virtual ~Animal() // ��������ж����ͷŲ��ɾ��ڴ�й©������
	//{
	//	cout << " Animal ���������� " << endl;
	//}
	//��������������������Ҳ��ʵ�֣�����ʵ��
	//����д���������Ҳ�ǳ�����
	virtual ~Animal() = 0;
};

Animal::~Animal()
{
	cout << " Animal �Ĵ����������� " << endl;
}

class Cat : public Animal
{
public:
	Cat(const char *name)
	{
		this->m_Name = new char[strlen(name) + 1];
		strcpy(this->m_Name, name);
		cout << " Cat �Ĺ��캯�� " << endl;
	}
	virtual void speak()
	{
		cout << " Сè�� ����" << endl;
	}
	~Cat()
	{
		cout << " Cat ���������� " << endl;
	}

	char* m_Name;
};

void test01()
{
	Animal* animal = new Cat("Tom");
	animal->speak();

	delete animal; //ֻ����ø������������������������������������ڴ�й©��
	//����������ڸ������������ǰ����virtual ���������������� 
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}